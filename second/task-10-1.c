#include<stdio.h>
#include<time.h>

void get_data(void) {
    FILE *fp;
    if ((fp = fopen("dt_dat", "r")) == NULL) printf("初回実行です\n");
    else {
        int month, day, h, m, s;
        fscanf(fp, "%d %d %d %d %d", &month, &day, &h, &m, &s);
        printf("前回:%d-%d-%d:%d:%d\n", month, day, h, m, s);
        fclose(fp);
    }
}
void put_data() {
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    if((fp = fopen("dt_dat", "w")) == NULL) printf("ファイルオープンできません\n");
    else {
        printf("現在の日時, 時刻を書き出しました\n");
        fprintf(fp, "%d %d %d %d %d", timer->tm_mon+1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        fclose(fp);
    }
}
int main(void) {
    get_data(); put_data(); get_data();
    return 0;
}