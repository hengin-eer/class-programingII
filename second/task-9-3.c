#include<stdio.h>

int main(void) {
    FILE *fp;
    char *fname;
    char arr[1024];

    printf("初期化したいファイル名を入力して下さい\n");
    scanf("%s", fname);

    fp = fopen(fname, "r"); fscanf(fp, "%s", arr);
    fclose(fp);
    printf("%s's contents: %s\n", fname, arr);

    fp = fopen(fname, "w");
    if (fp == NULL) printf("そのファイルは存在しません\n");
    else {
        printf("ファイルを初期化しました\n");
    }
    fclose(fp);

    return 0;
}