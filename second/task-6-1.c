#include<stdio.h>
#include<string.h>
#define NUMBER 3
#define NAME_LEN 64

struct student {
    char name[64];
    int height;
    float weight;
};
void swap_student(struct student *x, struct student *y) {
    struct student temp = *x;
    *x = *y; *y = temp;
}
void sort_by_weight(struct student a[], int n) {
    int i, j;
    for (i=0; i<n-1; i++) {
        for (j=n-1; j>i; j--) {
            if (a[j-1].weight > a[j].weight) {
                swap_student(&a[j-1], &a[j]);
            }
        }
    }
}

int main(void) {
    int i;
    struct student std[] = {
        {"Sato", 178, 61.2}, {"Sanaka", 175, 62.5}, {"Takao", 173, 86.2}
    };
    sort_by_weight(std, NUMBER);
    puts("After Sorted...");
    for (i=0; i<NUMBER; i++) {
        printf("%d:%-8s%4f\n",i+1,std[i].name,std[i].weight);
    }

    return 0;
}