#include<stdio.h>

unsigned rrotate(unsigned x, int n) {
    return x>>n;
}

unsigned lrotate(unsigned x, int n) {
    return x<<n;
}

int main(void) {
    int x = 4;
    int n = 2;
    printf("%d >> %d : %d\n",x, n, rrotate(x, n));
    printf("%d << %d : %d\n",x, n, lrotate(x, n));

    return 0;
}