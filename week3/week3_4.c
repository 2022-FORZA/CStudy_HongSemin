#include <stdio.h>

int main() {
	int arr[9];
	int arr1[8] = { 0 };
	int sum = 0;
	int t = 0;
	int ex1 = 0, ex2 = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	t = sum - 100;
	for (int i = 0; i < 9; i++) {
		for (int k = i + 1; k < 9; k++) {
			if ((arr[i] + arr[k]) == t) {
				ex1 = i;
				ex2 = k;
				break;
			}
		}
	}
	int s = 0;
	for (int i = 0; i < 9; i++) {
		if (i != ex1 && i != ex2) {
			arr1[s] = arr[i];
			s++;
		}
	}
	int temp = 0;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6 - i; k++) {
			if (arr1[k] > arr1[k + 1]) {
				temp = arr1[k];
				arr1[k] = arr1[k + 1];
				arr1[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		printf("%d\n", arr1[i]);
	}

}
