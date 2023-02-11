#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test_atoi(void) {
    puts("\nTest of atoi:\n");
    printf("%d\n", atoi("3.14159265359"));
    printf("%d\n", atoi("2.71828182846"));
    printf("%d\n", atoi("1+132"));
    printf("%d\n", atoi("   -369"));
    printf("%d\n", atoi("3*2*1"));
}

void test_strcmp(void) {
    puts("\nTest of strcmp:\n");
    char s1[] = "Akashi";
    char s2[] = "Kosen";
    char s3[] = "AkashiKosen";
    printf("%d\n", strcmp(s1, s1));
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    strcat(s1, s2);
    printf("s3: %s\n", s3);
    printf("%d\n", strcmp(s1, s3));
}

int main(void) {
    test_atoi();
    test_strcmp();

    return 0;
}