#include <stdio.h>
int rev(int n) {
	int t = 0;
	while (n>0) {
		t *= 10;
		t += n % 10;
		n /= 10;
	}
	return t;
}

int main() {
	int num, num1;
	scanf("%d %d", &num, &num1);

	printf("%d", rev(rev(num) + rev(num1)));
}