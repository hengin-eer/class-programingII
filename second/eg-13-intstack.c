#include <stdio.h>
#include <stdlib.h>

typedef struct intstack {
    int max;
    int ptr;
    int *stk;
} IntStack;

int Init(IntStack *s, int max) {
    s->ptr = 0;
    if ((s->stk = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;

        return -1;
    }
    s->max = max;
    return 0;
}

int Push(IntStack *s, int x) {
    if (s->ptr >= s->max) return -1;
    s->stk[s->ptr++] = x;
    return 0;
}

int Pop(IntStack *s, int *x) {
    if (s->ptr <= 0) return -1;
    *x = s->stk[--s->ptr];
    return 0;
}

void Terminate(IntStack *s) {
    if (s->stk != NULL) {
        free(s->stk);
        s->max = s->ptr = 0;
    }
}

int main(void) {
    IntStack s;
    if (Init(&s, 128) == -1) {
        puts("Error: failed to create stacks!\n");
        return 1;
    }
    while (1) {
        int menu, x;
        puts("(1)push, (2)pop, (0)finish : ");
        scanf("%d", &menu);
        if (menu == 0) break;
        switch (menu) {
            case 1:
                puts("data: ");
                scanf("%d", &x);
                if (Push(&s, x) == -1) puts("\aError: failed to push\n");
                break;
            case 2:
                if (Pop(&s, &x) == -1)
                    puts("\aError: failed to pop\n");
                else
                    printf("Poped data is %d\n", x);
                break;
        }
    }
    Terminate(&s);
    return 0;
}