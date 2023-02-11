#include<stdio.h>

void rev_string(char *s);

int main(void) {
    char str[] = "abcdefg";
    printf("str: %s\n", str);
    rev_string(str);

    return 0;
}

void rev_string(char *s) {
    int len = 0;
    char *t = s;
    while (*t++) {
        len++;
    }
    char tmp;
    for (int i=0; i<len/2; i++) {
        tmp = *(s+i);
        *(s+i) = *(s+len-i-1);
        *(s+len-i-1) = tmp;
    }
    printf("reversed *s: %s\n", s);
}