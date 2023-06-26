#include <stdio.h>

int d(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int dt[10000] = { 0 };

	for (int i = 0; i < 10000; i++) {
		int sum = d(i);
		if (sum < 10000) dt[sum] = 1;
	}
	for (int i = 0; i < 10000; i++) {
		if (dt[i] != 1) printf("%d\n", i);
	}
}
