#include<stdio.h>

void star(int);

int main(void) {
    star(5);

    return 0;
}

void star(int n) {
    int i, j;
    for (j=0; j<n; j++) {
        for (i=0; i<j; i++) {
            printf(" ");
        }
        for (i=n-j; i>0; i--) {
            printf("*");
        }
        printf("\n");
    }
}