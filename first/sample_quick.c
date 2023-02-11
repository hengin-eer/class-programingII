#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int int_cmp(const int *a, const int *b)
{
	if (*a < *b)return -1;
	else if (*a > *b)return 1;
	else return 0;
}

int main(void) {
	int i, nx = 200; int *x; double time;

	printf("クイックソート\n要素数 経過時間 ソート結果\n");
	while (1) {
		x = (int*)calloc(nx, sizeof(int));
		printf("%8d ", nx);
		for (i = 0; i < nx; i++) { x[i] = rand(); }
		clock_t start = clock();
		qsort(x, nx, sizeof(int), (int(*)(const void*, const void *))int_cmp);

		clock_t end = clock();
		time = (double)(end - start) / CLOCKS_PER_SEC;
		printf("%6.3f ", time);

		for (i = 0; i < 10; i++) printf("%d ", x[i]);
		printf("\n");

		free(x);
		if (time > 0.1) break;
		nx = nx * 2;
	}
	return 0;
}