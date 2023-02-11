#include<stdio.h>

int hello(int type) {
    printf(">>Select the type!\n>Hello : 1\n>What's up? : 2\n>How's it going? : other\n\n");
    if (type == 1) {
        printf("Hello\n\n");
    }
    else if (type == 2) {
        printf("What's up?\n\n");
    }
    else printf("How's it going?\n\n");
}

int main(void) {
    hello(1);
    hello(2);
    hello(3);
    hello(4);
}