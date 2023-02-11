#include<stdio.h>
#include<stdlib.h>
#define N (10)

int main(void) {
    int *x = calloc(N, sizeof(int));
    for (int i=0; i<N; i++) {
        x[i] = i*2;
        printf("x[%d]: %d\n", i, x[i]);
    }

    free(x);

    return 0;
}