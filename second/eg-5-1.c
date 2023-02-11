#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int *x;
    x = (int*) calloc(1, sizeof(int));
    *x = 10;

    free(x);

    return 0;
}