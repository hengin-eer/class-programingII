#include<stdio.h>

int main(void) {
    int i, ii, ch;
    int cnt[10] = {0};
    printf("Input the numbers!\n");
    while((ch = getchar()) != EOF) {
        if(ch >='0' && ch <='9')    cnt[ch-'0']++;
    }
    puts("Number of appearances of numbers\n");
    puts("'*' Indicates the number of occurrences\n");
    for(i=0; i<10; i++) {
        printf("'%d':", i);
        for(ii=0; ii<cnt[i]; ii++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}