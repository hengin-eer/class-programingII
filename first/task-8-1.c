#include<stdio.h>
#include<limits.h>

int INT(void) {
    int i, num, fact=1;
    printf("INT_MAX %d\n", INT_MAX);
    printf("整数を入力して下さい : ");
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
        if (INT_MAX/fact <= i) {
            printf("INT_MAX(%d) / fact(%d) %d <= i %d\n", INT_MAX, fact, INT_MAX/fact, i);
        }
        fact *= i;
    }
    printf("%dの階乗は%dです\n", num, fact);
    
    return 0;
}
int main(void) {
    INT();

    long i, num, fact = 1;
    printf("LONG_MAX %ld\n",LONG_MAX);
    printf("整数を入力して下さい：");
    scanf("%ld", &num);
    for (i = 1; i <= num; i++){
        if(LONG_MAX/fact<=i){
            printf("LONG_MAX(%ld) / fact(%ld) %ld <= i %ld\n",LONG_MAX,fact,LONG_MAX/fact,i);
        }
        fact *= i;
    }
    printf("%ldの階乗は%ldです\n", num, fact);

    return 0;
}