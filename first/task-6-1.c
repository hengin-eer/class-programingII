#include<stdio.h>

int euclid(int x, int y) {
    printf("\n x:%d y:%d", x, y);
        if (y == 0) return x;
        else    return euclid(y, x % y);
}

int main(void) {
    printf("Find the greatest common divisor from Euclidean\n");
    int x=1024, y=532;
    printf("\n\nThe greatest common divisor between %d and %d is %d!\n", x, y, euclid(x, y));

    return 0;
}