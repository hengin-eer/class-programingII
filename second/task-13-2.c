#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUMBER 4
#define NAME_LEN 64

struct student {
    char name[64];
    int height;
    float weight;
};

int compare_struct(struct student *a, struct student *b) {
    if ((b->height - a->height) != 0) return b->height - a->height;
    else return b->weight - a->weight;
}

int main(void) {
    int i;
    struct student std[] = {
        {"Sato", 178, 61.2}, {"Nagao", 173, 77.7}, {"Sanaka", 175, 62.5}, {"Takao", 173, 86.2}
    };
    qsort(std, NUMBER, sizeof(struct student), compare_struct);
    puts("After Sorted...");
    for (i=0; i<NUMBER; i++) {
        printf("%d:%-8s%3d  %3f\n",i+1,std[i].name,std[i].height,std[i].weight);
    }

    return 0;
}