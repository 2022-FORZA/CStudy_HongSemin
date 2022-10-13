#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, chong, bu;
	int* arr;
	scanf("%d\n", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &chong, &bu);

	long long cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += 1;
		arr[i] = arr[i] - chong;
		if (arr[i] > 0) {
			cnt += ceil(arr[i] * 1.0 / bu);
		}
	}
	printf("%lld", cnt);
	free(arr);
}