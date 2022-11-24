#include <stdio.h>
int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
const char* date[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	for (int i = 0; i < num1 - 1; i++) {
		num2 += month[i];
	}
	printf("%s", date[num2 % 7]);
	return 0;
}