#include<stdio.h>
int main(void) {
    int firstNum, secondNum, prod;
    printf("Input the first number! >>");
    scanf("%d", &firstNum);//21
    printf("Input the second number! >>");
    scanf("%d", &secondNum);//26
    prod = firstNum * secondNum;//546
    printf("The product is %d!\n", prod);

    return 0;
}