#include<stdio.h>
void rev_intary(int v[], int n) {
    printf("Enter the contents of each array\n");
    int i, w[n];
    for (i=0; i < n; i++) {
        w[i] = v[n-1-i];
    }
    printf("Reversed!\n\n");
    for (i=0; i < n; i++) {
        printf("%d ", w[i]);
        if (i == n-1) printf("\n");
    }
}

int main(void) {
    int a[6] = {5,4,0,3,1,7};
    rev_intary(a, 6);
}