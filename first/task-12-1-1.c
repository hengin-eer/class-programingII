#include<stdio.h>

int main(void) {
    int i, ch;
    int cnt = 0;
    while((ch = getchar()) != EOF) {
        if(ch == '\n')    cnt++;
    }
    printf("\'\\n\':%d\n", cnt);

    return 0;
}