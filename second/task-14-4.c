#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int max;
	int num;
	int front;
	int rear;
	int *que;
} IntQueue;

int Initialize(IntQueue *q, int max);

int Enque(IntQueue *q, int x);

int Deque(IntQueue *q, int *x);

int Search(const IntQueue *q, int x);

void Terminate(IntQueue *q);

int main(void){
	IntQueue que;
	if (Initialize(&que, 64) == -1) {
		puts("Failed to generate queue");
		return 1;
	}
	while (1) {
		int menu, x, num;
		printf("(1)ENQUEUE (2)DEQUEUE (3)SEARCH (0)END : ");
		scanf("%d", &menu);
		if (menu == 0)
			break;
		switch (menu) {
			case 1:
				printf("DATA: ");
				scanf("%d", &x);
				if (Enque(&que, x) == -1)
					puts("\a ERROR: Failed to enqueue");
				break;
			case 2:
				if (Deque(&que, &x) == -1)
					puts("\a ERROR: Failed to dequeue");
				else
					printf("Dequeued data is %d\n", x);
				break;
			case 3:
				printf("Enter the number you want to explore : ");
				scanf("%d", &num);
				if (Search(&que, num) == -1)
					puts("Failed to find the number");
				else
					printf("The number is stored in the subscript is position %d\n", Search(&que, num));
		}
	}
	Terminate(&que);
	return 0;
}
int Initialize(IntQueue *q, int max){
	q->num = q->front = q->rear = 0;
	if ((q->que = (int*) calloc(max, sizeof(int))) == NULL) {
		q->max = 0;
		return -1;
	}
	q->max = max;
	return 0;
}
int Enque(IntQueue *q, int x){
	if (q->num >= q->max)
		return -1;
	else {
		q->num++;
		q->que[q->rear++] = x;
		if (q->rear == q->max)
			q->rear = 0;
		return 0;
	}
}
int Deque(IntQueue *q, int *x){
	if (q->num <= 0)
		return -1;
	else {
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return 0;
	}
}
int Search(const IntQueue *q, int x){
	int ele = q->front;
	while (q->que[ele] != x){
		ele++;
		if (q->num == 0 || q->que[ele] == '\0')
			return -1;
	}
	return ele;
}
void Terminate(IntQueue *q){
	if (q->que != NULL)
		free(q->que);
	q->max = q->num = q->front = q->rear = 0;
}