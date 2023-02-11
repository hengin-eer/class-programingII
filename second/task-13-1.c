#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUMBER 3
#define NAME_LEN 64

struct student {
    char name[64];
    int height;
    float weight;
};

int compare_struct(struct student *a, struct student *b) {
    return a->height - b->height;
}

int main(void) {
    int i;
    struct student std[] = {
        {"Sato", 178, 61.2}, {"Sanaka", 175, 62.5}, {"Takao", 173, 86.2}
    };
    qsort(std, 3, sizeof(struct student), compare_struct);
    puts("After Sorted...");
    for (i=0; i<NUMBER; i++) {
        printf("%d:%-8s%3d\n",i+1,std[i].name,std[i].height);
    }

    return 0;
}