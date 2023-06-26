#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char arr[101];
	int result = 0; 

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int cnt[27] = { 0 };
		scanf("%s", arr);
		for (int i = 0; i < strlen(arr); i++) {
			if (cnt[arr[i] - 'a'] == 0) {
				cnt[arr[i] - 'a'] = 1;
			}
			else if (arr[i] == arr[i - 1]) cnt[arr[i] - 'a'] = 1;
			else if (arr[i] !=  arr[i - 1]) break;
			if (i == strlen(arr) - 1) {
				result++;
			}
		}
	}
	printf("%d", result);
}
