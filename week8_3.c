#include <stdio.h>

int main() {
	int n, num;
	scanf("%d", &n);
	while (n--) {
		int cnt = 0;
		scanf("%d", &num);
		printf("Pairs for %d:", num);
		for(int i=1;i<num-i;i++){
			if (i != 1) printf(",");
			printf(" %d %d", i, num - i);
		}
		printf("\n");
	}
}