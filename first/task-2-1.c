#include<stdio.h>
int Conpa(int a, int b) {
    int c;
    if (a>b) c = b;
    else if (a<b) c = a;
    else if (a==b) c = a;

    return c;
}
int main(void) {
    printf("Conparison %d\n", Conpa(7, 7));

    return 0;
}