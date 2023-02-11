#include<stdio.h>
int search(int array[], int search_v, int array_num) {
    int result;
    for (int i=array_num-1; i>=0; i--) {
        if (array[i] == search_v) result = i;
    }

    return result;
}

int main(void) {
    int a[5] = {495, 214, 608, 224, 221};
    int V = 608;
    printf("The number %d is in array[%d]!\n", V, search(a, V, 5));

    return 0;
}