#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int a[], int n)
{
	int i, j; int t;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j]) {
				t = a[j - 1]; a[j - 1] = a[j]; a[j] = t;
			}				
	}
}

int main(void)
{
	int i, nx;int *x;double time;
	nx = 200;

	printf("バブルソート\n要素数 経過時間 ソート結果\n");

	while (1) {
		printf("%8d ", nx);
		clock_t start = clock();
		x = (int *)calloc(nx, sizeof(int));

		for (i = 0; i < nx; i++) { x[i] = rand(); }
		bubble(x, nx);
		clock_t end = clock();
		time = (double)(end - start) / CLOCKS_PER_SEC;
		printf("%6.3f  ", time);

		for (i = 0; i < 10; i++)printf("%d ", x[i]);
		printf("\n");free(x);

		if (time > 0.1)break;nx = nx * 2;
	}
	return 0;
}