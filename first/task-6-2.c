#include<stdio.h>

int main(void) {
    long int i, sum, dig;
    char str[] = "E2126";
    for (i=4,sum=0,dig=1; i>=0; i--) {
        if ('9' >= str[i] && str[i] >= '0') {
            sum += (str[i] - '0') * dig;
        }
        if ('F' >= str[i] && str[i] >= 'A') {
            sum += (str[i] - 'A' + 10) * dig;
        }
        if ('f' >= str[i] && str[i] >= 'a') {
            sum += (str[i] - 'a' + 10) * dig;
        }
        dig *= 16;
    }
    printf("0xE2126 : %ld\n", sum);
    return 0;
}