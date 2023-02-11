#include<stdio.h>
int main(void) {
    int h, i, j, a[5] = {1, 6, 2, 4, 8}, b[5];
    
    for (h=0; h<5; h++) {
        b[h] = a[4-h];
    }
    for (i=0; i<5; i++) {
        for (j=0; j<=i; j++) {
            printf("%d ", b[j]);
        }
        printf("\n");
    }

    return 0;
}