#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, max = 0, total = 0;
	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	for (int i = n - 1; i >= 0; i--) {
		if (max < num[i]) {
			max = num[i];
			total += 1;
		}
	}
	printf("%d", total);
	return 0;
}

