#include <stdio.h>

int main() {
	int N;
	int x = 0, y = 0, num;
	scanf("%d", &N);
	while (1) {
		if (N <= 6 * x + 1) {
			num = y + 1;
			break;
		}
		y++;
		x += y;
	}
	printf("%d", num);
}
