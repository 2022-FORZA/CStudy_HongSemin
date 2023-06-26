#include <stdio.h>

int main() {
	int n;
	int num;
	double ave, perc;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {

		scanf("%d", &num);

		for (int k = 0; k < num; k++) {
			scanf("%d", &arr[k]);
		}

		int sum = 0;
		for (int i = 0; i < num; i++) {
			sum += arr[i];
		}
		ave = (double)sum / num;

		int cnt = 0;
		for (int i = 0; i < num; i++) {
			if (arr[i] > ave) cnt += 1;
			else continue;
		}

		perc = ((double)cnt / num) * 100;
		printf("%.3f%%\n", perc);
	}
}
