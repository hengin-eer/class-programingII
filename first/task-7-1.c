#include <stdio.h>
int main(void){
    int i,ii,dansu;
    dansu=4;
    for(i=1;i<dansu;i++){
        for(ii=0; ii<3-i; ii++){
            printf("a");
        }
        for(ii=0;ii<(i-1)*2+1;ii++){
            printf("*");
        }
        for(ii=0; ii<3-i; ii++){
            printf("b");
        }
        printf("\n");
    }
    return 0;
}