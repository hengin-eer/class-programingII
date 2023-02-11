#include<stdio.h>
#define cap 10

int main(void) {
    int i, cnt=0;
    char s[cap][128];
    for(i=0; i<cap; i++) {
        printf("s[%d]:", i);
        scanf("%s", s[i]);
        cnt++;

        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            i = cap;
        }
    }
    for(i=0; i<cnt-1; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}