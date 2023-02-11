#include<stdio.h>

void update(int a[], int i, int b) {
    while (i>=0) {
        a[i] = 1;i--;
    }
    b = 1;
}

int main(void) {
    int A[5] = {6,8,2,4,1}, B = 0;
    update(A, 4, B);
    printf("A[5] = {%d %d %d %d %d}\n", A[0], A[1], A[2], A[3], A[4]);
    printf("B = %d\nB is not changed!\n", B);

    return 0;
}