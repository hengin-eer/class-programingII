#include<stdio.h>

void rev_strings(char s[][128], int n) {
    int i, j, tmp, cnt = 0;
    for (i=0; i<n; i++) {
        for (j=0; s[i][j] != '\0'; j++) {
            cnt++;
        }
        for (j=0; j< cnt/2; j++) {
            tmp = s[i][cnt - j - 1];
            s[i][cnt - j - 1] = s[i][j];
            s[i][j] = tmp;
        }
        printf("s[%d] = ", i);
        for (j=0; j<cnt; j++) {
            printf("%c", s[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    char str[][128] = {"Apple", "123", "kosen"};
    rev_strings(str, 3);
    
    return 0;
}