#include<stdio.h>

int min_of(const int v[], int n) {
    int minValue;
    int i;

    minValue = v[0];
    for (i=0; i < n; i++) {
        if (v[i] <minValue) minValue = v[i];
    }

    return minValue;
}

int main(void) {
    int a[5] = {4,6,2,7,1};
    printf("%d\n", min_of(a, 5));

    return 0;
}