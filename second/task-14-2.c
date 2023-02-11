#include <stdio.h>
#include <stdlib.h>
typedef struct member {
    int no;
    char name[20];
} Member;

typedef struct intstack {
    int max;
    int ptr;
    Member *stk;
} IntStack;

int Initialize(IntStack *s, int x);

int Push(IntStack *s, Member x);

int Pop(IntStack *s, Member *x);

void Terminate(IntStack *s);

int main(void) {
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("Failed to generate stack");
        return 1;
    }
    while (1) {
        int menu;
        Member a;
        printf("(1)PUSH (2)POP (0)END : ");
        scanf("%d", &menu);
        if (menu == 0) break;
        switch (menu) {
            case 1:
                printf("DATA: ");
                scanf("%d", &a.no);
                if (Push(&s, a) == -1) puts("\a ERROR: Failed to push");
                break;
            case 2:
                if (Pop(&s, &a) == -1)
                    puts("\a ERROR: Failed to pop");
                else
                    printf("Popped data is %d\n", a.no);
                break;
        }
    }
    Terminate(&s);
    return 0;
}
int Initialize(IntStack *s, int max) {
    s->ptr = 0;
    if ((s->stk = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}
int Push(IntStack *s, Member x) {
    if (s->ptr >= s->max) return -1;
    s->stk[s->ptr++] = x;
    return 0;
}
int Pop(IntStack *s, Member *x) {
    if (s->ptr <= 0) return -1;
    *x = s->stk[--s->ptr];
    return 0;
}
void Terminate(IntStack *s) {
    if (s->stk != NULL) free(s->stk);
    s->max = s->ptr = 0;
}