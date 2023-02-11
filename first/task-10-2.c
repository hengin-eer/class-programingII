#include<stdio.h>

void put_count(void) {
    static int n = 0;
    n += 1;
    printf("put_count:%d回目\n", n);
}

int main(void) {
    int i, n;
    printf("Enter the number to calling!\n");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        put_count();
    }

    return 0;
}