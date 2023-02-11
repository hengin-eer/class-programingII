#include<stdio.h>

int showAge(void) {
    int age;
    printf("Input your age.\n");
    scanf("%d", &age);
    printf("You're %d years old.\n", age);

    return 0;
}

int main(void) {
    showAge();

    return 0;
}