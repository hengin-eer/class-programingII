#include<stdio.h>
#include<stdlib.h>

int compare_int(const int *a, const int *b) {
    return *b - *a;
}

int main(void) {
    int data[] = {4, 3, 6, 2, 1};
    int i;
    qsort(data, 5, sizeof(int), compare_int);
    for (i=0; i<5; i++) {
        printf("%3d", data[i]);
    }
    printf("\n");
    return 0;
}