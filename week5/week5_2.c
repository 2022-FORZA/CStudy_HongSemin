#include <stdio.h>

int main() {
	int n;
	long long result = 0;
	int num = 0;
	long long max = 0;
	long long min = 1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num > max) max = num;
		if (num < min) min = num;
	}
	result = max * min;
	printf("%lld", result);
}
