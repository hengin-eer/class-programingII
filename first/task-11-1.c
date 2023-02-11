#include<stdio.h>
enum season {Spring, Summer, Autumn, Winter};

void spring(void) {
    printf("season: spring\n");
}
void summer(void) {
    printf("season: summer\n");
}
void autumn(void) {
    printf("season: autumn\n");
}
void winter(void) {
    printf("season: winter\n");
}
void und(void) {
    printf("Undefined\n");
}

enum season select(void) {
    int tmp;
    do {
        printf("0:spring, 1:summer, 2:autumn, 3:winter : ");
        scanf("%d", &tmp);
    } while(tmp<Spring || tmp>Winter);
    return tmp;
}

int main(void) {
    enum season selected;
    switch (selected=select()) {
        case Spring : spring(); break;
        case Summer : summer(); break;
        case Autumn : autumn(); break;
        case Winter : winter(); break;
        default : und(); break;
    }

    return 0;
}