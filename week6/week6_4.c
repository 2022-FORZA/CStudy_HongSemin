#include <stdio.h>

int main() {
	int a[1000];
	int n, i, k, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (k = n; k > 0; k--) {
		for (j = i = 0; i < n; i++) if (a[i] >= k) j++;
		if (j >= k) break;
	}
	printf("%d\n", k);
	return 0;
}
