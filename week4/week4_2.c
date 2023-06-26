#include <stdio.h>

int main() {
	int w[10];
	int k[10];
	int result_w, result_k;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &w[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &k[i]);
	}
	int temp = 0;
	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9 - i; k++) {
			if (w[k] > w[k + 1]) {
				temp = w[k];
				w[k] = w[k + 1];
				w[k + 1] = temp;
			}
		}
	}
	int tem = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (k[j] > k[j + 1]) {
				tem = k[j];
				k[j] = k[j + 1];
				k[j + 1] = tem;
			}
		}
	}
	result_w = w[9] + w[8] + w[7];
	result_k = k[9] + k[8] + k[7];
	printf("%d", result_w);
	printf(" ");
	printf("%d", result_k);
}
