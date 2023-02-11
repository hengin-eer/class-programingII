#include<stdio.h>

void str_tolower(char s[]) {
    int i = 0;
    puts("Changing...\n");
    while(s[i]) {
        if ('A' <= s[i] && s[i] <= 'Z') s[i] = s[i] + 32;
        else s[i] = s[i];
        i++;
    }
}

int main(void) {
    char str[128];
    printf("Enter a string!\n");
    scanf("%s", str);
    printf("before: %s\n", str);
    str_tolower(str);
    printf("after:  %s\n", str);

    return 0;
}