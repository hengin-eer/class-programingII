#include<stdio.h>
int main(void) {
    float a;
    int b;
    char c;
    double d;

    printf("Input a number! >>");
    scanf("%f", &a);//6
    printf("Input a number! >>");
    scanf("%d", &b);//6
    printf("Input a number! >>");
    scanf(" %c", &c);//6
    printf("Input a number! >>");
    scanf("%lf", &d);//6

    printf("\n\n");

    printf("%f\n", a);
    printf("%d\n", b);
    printf("%c\n", c);
    printf("%lf\n", d);

    return 0;
}