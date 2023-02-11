#include<stdio.h>
#include<string.h>

int main(void) {
    char str1[128] = {"a"};
    char str2[128] = {"b"};

    strcat(str1,str2);

    printf("%s\n",str1);

    int len = strlen(str1);

    printf("%d\n",len);

    return 0;
}