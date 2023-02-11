#include<stdio.h>
int j;
void func1(void) {
    int i = 1;
    printf("%d is 'i' in func1.\n", i);
}

int main(void) {
    int i = 0;
    func1();
    printf("%d is 'i' in main.\n", i);
    j = 2;
    printf("%d is 'j' which is global variables.\n", j);

    return 0;
}