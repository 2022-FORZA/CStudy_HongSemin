#include <stdio.h>

int main() {
	int kg[51] = { 0 };
	int height[200] = { 0 };
	int n;
	int t = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &kg[i], &height[i]);
	}
	for (int i = 0; i < n; i++) {
		t = 1;
		for (int k = 0; k < n; k++) {
			if (kg[i] < kg[k] && height[i] < height[k]) {
				t++;
			}
		}
		printf("%d\n", t);
	}
}
