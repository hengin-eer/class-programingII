#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int no;
    char name[20];
}Member;

typedef struct{
	int max;
	int num;
	int front;
	int rear;
    Member *que;
} IntQueue;

int Initialize(IntQueue *q, int max);

int Enque(IntQueue *q, Member x);

int Deque(IntQueue *q, Member *x);

void Terminate(IntQueue *q);

int main(void){
	IntQueue que;
	if (Initialize(&que, 64) == -1) {
		puts("Failed to generate queue");
		return 1;
	}
	while (1) {
		int menu;
        Member a;
		printf("(1)ENQUEUE (2)DEQUEUE (0)END : ");
		scanf("%d", &menu);
		if (menu == 0)
			break;
		switch (menu) {
			case 1:
				printf("DATA: ");
				scanf("%d", &a.no);
				if (Enque(&que, a) == -1)
					puts("\a ERROR: Failed to enqueue");
				break;
			case 2:
				if (Deque(&que, &a) == -1)
					puts("\a ERROR: Failed to dequeue");
				else
					printf("Dequeued data is %d\n", a.no);
				break;
		}
	}
	Terminate(&que);
	return 0;
}
int Initialize(IntQueue *q, int max){
	q->num = q->front = q->rear = 0;
	if ((q->que = (Member*) calloc(max, sizeof(int))) == NULL) {
		q->max = 0;
		return -1;
	}
	q->max = max;
	return 0;
}
int Enque(IntQueue *q, Member x){
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
int Deque(IntQueue *q, Member *x){
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
void Terminate(IntQueue *q){
	if (q->que != NULL)
		free(q->que);
	q->max = q->num = q->front = q->rear = 0;
}