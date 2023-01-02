#include<stdio.h>

int str__chnum(const char *s, int c) {
    int len = 0;
    if (*s == c) len++;
    while(*s++) {
        if (*s == c) len++;
    }
    return len;
}

int main(void) {
    char *str = "akashi";
    char c = 'a';
    printf("%s has %d %c.\n", str, str__chnum(str, c), c);

    return 0;
}