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

int Init(IntStack *s, int max) {
    s->ptr = 0;
    if ((s->stk = calloc(max, sizeof(Member))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

int Push(IntStack *s, Member x) {
    if (s->ptr >= s->max) return -1;
    s->stk[-s->ptr++] = x;
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

int main(void) {
    IntStack s;
    if (Init(&s, 128) == -1) {
        puts("failed to generate stack");
        return 1;
    }
    while (1) {
        int menu;
        Member ngo;
        printf("(1) push, (2) pop, (0) finish : ");
        scanf("%d", &menu);
        if (menu == 0) break;
        switch (menu) {
            case 1:
                printf("data: ");
                scanf("%d", &ngo.no);
                if (Push(&s, ngo) == -1) puts("\aError: failed to push!");
                break;
            case 2:
                if (Pop(&s, &ngo) == -1)
                    puts("\a Error: failed to pop!");
                else
                    printf("Poped data is %d\n", ngo.no);
                break;
        }
    }
    Terminate(&s);
    return 0;
}