#include<stdio.h>
#include<time.h>

void put_data(char *fname) {
    FILE *fp; time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    if ((fp = fopen(fname, "w")) == NULL) printf("ファイルオープンできません");
    else {
        printf("現在の日時・時刻を書き出しました\n");
        fprintf(fp, "%d %d %d %d %d", timer->tm_mon+1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        fclose(fp);
    }
}

void get_data(char *fname) {

    FILE *fp;
    if ((fp = fopen(fname, "r")) == NULL) printf("初回実行です\n");
    else {
        int month, day, h, m, s;
        fscanf(fp, "%d %d %d %d %d", &month, &day, &h, &m, &s);
        fclose(fp);
    }
}

int main(void){
    int ch; FILE *sfp; FILE *dfp;
    int count = 0;
    char sname[FILENAME_MAX]; char dname[FILENAME_MAX];
    printf("コピー元ファイル名:"); scanf("%s",sname);
    printf("コピー先ファイル名:"); scanf("%s",dname);
    printf("%s %s\n",sname,dname); put_data(sname);
    if ((sfp=fopen(sname,"r")) == NULL) printf("コピー元open不可");
    else { 
        if ((dfp=fopen(dname,"w")) == NULL) printf("コピー先open不可");
        else {
            while((ch=fgetc(sfp)) != EOF) count++; fputc(ch,dfp); fclose(dfp); get_data(dname);
        }
        printf("count: %d\n", count);
    }
    fclose(sfp);
    return 0;
}