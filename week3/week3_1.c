#include <stdio.h>
#include <string.h>

int main() {
	char color[10];
	int n = 0;
	int sum = 0;
	int arr[11] = { 1, 10, 100, 1000, 10000, 100000,1000000,10000000,100000000,1000000000 };
	for (int i = 0; i < 3; i++) {
		scanf("%s", &color);
		if ((strcmp("black", color) == 0)) {
			n = 0;
		}
		else if ((strcmp("brown", color) == 0)) {
			if (i == 0) n = 10;
			else n = 1;
		}
		else if ((strcmp("red", color) == 0)) {
			if (i == 0) n = 20;
			else n = 2;
		}
		else if ((strcmp("orange", color) == 0)) {
			if (i == 0) n = 30;
			else n = 3;
		}
		else if ((strcmp("yellow", color) == 0)) {
			if (i == 0) n = 40;
			else n = 4;
		}
		else if ((strcmp("green", color) == 0)) {
			if (i == 0) n = 50;
			else n = 5;
		}
		else if ((strcmp("blue", color) == 0)) {
			if (i == 0) n = 60;
			else n = 6;
		}
		else if ((strcmp("violet", color) == 0)) {
			if (i == 0) n = 70;
			else n = 7;
		}
		else if ((strcmp("grey", color) == 0)) {
			if (i == 0) n = 80;
			else n = 8;
		}
		else if ((strcmp("white", color) == 0)) {
			if (i == 0) n = 90;
			else n = 9;
		}
		sum += n;
	}
	printf("%.0f", (double)(sum - n) * arr[n]);
}
