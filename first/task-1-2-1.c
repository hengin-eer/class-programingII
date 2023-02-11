#include<stdio.h>
int main(void) {
    int i, a[5] = {1, 6, 2, 4, 8}, b[5];

    for (i=0; i<5; i++) {
        printf("%d", a[i]);
    }
    printf("\n\n");
    
    for (i=0; i<5; i++) {
        b[i] = a[4-i];
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}