#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rev_strings(char *s[128], int n) {
    int len =0, i, j;
    char tmp, *t, *s2;
    for (i=0; i<n; i++) {
        printf("*s[%d]: %s\n", i, *(s + i));
        s2 = calloc(sizeof(char), 128);
        t = *(s + i);
        strcpy(s2, t);
        len = strlen(t);
        for (j=0; j<len/2; j++) {
            tmp = *(s2+j);
            *(s2+j) = *(s2+len-j-1);
            *(s2+len-j-1) = tmp;
        }
        *(s + i) = s2;
        printf("reversed s[%d]: %s\n", i, *(s + i));
    }
    for (i=0; i<n; i++) {
        printf("*s[%d]: %s\n", i, *(s + i));
    }
}

int main(void) {
    char *str[128] = {"Akashi", "Kosen", "Nagao"};
    int num = 3;
    rev_strings(str, num);

    return 0;
}