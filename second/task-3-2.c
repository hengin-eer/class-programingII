#include<stdio.h>

int str__dignum(const char *s) {
    int nums = 0;
    if ('0' <= *s && *s <= '9') nums++;
    while (*s++) {
        if ('0' <= *s && *s <= '9') nums++;
    }
    return nums;
}

int main(void) {
    char *str = "e2126@s.akashi.ac.jp";
    printf("%s has %d numbers.\n", str, str__dignum(str));

    return 0;
}