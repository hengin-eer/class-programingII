#include<stdio.h>

int main(void) {
    FILE *fp;
    char *fname;

    printf("確認したいファイル名を入力して下さい\n");
    scanf("%s", fname);
    printf("%s\n", fname);

    fp = fopen(fname, "r");
    if (fp == NULL) printf("そのファイルは存在しません\n");
    else {
        printf("そのファイルは存在します\n");
    }

    return 0;
}