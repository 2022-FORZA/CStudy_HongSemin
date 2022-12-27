#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[20000][51];

int compare(char* brray, char* crray) {
	int x = strlen(brray);
	int y = strlen(crray);
	if (x < y) return -1;
	else if (x > y) return 1;
	else {
		return strcmp(brray, crray);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);
	}
	qsort(arr, n, 51 * sizeof(char), compare);
	printf("%s\n", arr[0]);
	for (int i = 1; i < n; i++) {
		if (strcmp(arr[i - 1], arr[i])) printf("%s\n", arr[i]);
	}
	return 0;
}
