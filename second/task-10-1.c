#include <stdio.h>
#include <time.h>

void getData(void) {
    FILE *fp;
    if ((fp = fopen("task-data-10-1.txt", "r")) == NULL)
        printf("Initial run!\n");
    else {
        int month, day, h, m, s;
        char felleng[1024];
        fscanf(fp, "%d %d %d %d %d %s", &month, &day, &h, &m, &s, &felleng);
        printf("%d/%d %d:%d:%d, I feel %s!\n", month, day, h, m, s, felleng);
        fclose(fp);
    }
}

void putData(void) {
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    char feeling[1024];
    if ((fp = fopen("task-data-10-1.txt", "w")) == NULL)
        printf("Cannot open that file!\n");
    else {
        printf("Current date and time were written down!\n\n");
        printf("How are you feeling?\n");
        scanf("%s", &feeling);
        fprintf(fp, "%d %d %d %d %d %s", timer->tm_mon + 1, timer->tm_mday,
                timer->tm_hour, timer->tm_min, timer->tm_sec, feeling);
        fclose(fp);
    }
}

int main(void) {
    getData();
    putData();
    getData();

    return 0;
}