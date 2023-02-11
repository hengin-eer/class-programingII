#include<stdio.h>

int copy_array(int a[], int array_size) {
    int i;
    for (i=0; i<array_size/2; i++) {
        a[i] = a[i + array_size/2 + array_size%2];
    }
    return 0;
}
int main(void) {
    int a[] = {3,6,4,8,2,1},i;

    copy_array(a, 6);
    for (i=0; i<6; i++) {
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}