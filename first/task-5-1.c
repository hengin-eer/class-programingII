#include<stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i=n; i>0; i--) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n = 5;
    printf("%d! =%d\n", n, factorial(n));

    return 0;
}