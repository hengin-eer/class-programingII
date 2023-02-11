#include<stdio.h>
int Compa(int a, int b, int c) {
    int s;

    if (b>=a&&c>=a) s = a;
    else if (a>=b&&c>=b) s = b;
    else if (a>=c&&b>=c) s = c;

    return s;
}
int main(void) {
    printf("Comparison %d\n", Compa(2, 8, 4));

    return 0;
}