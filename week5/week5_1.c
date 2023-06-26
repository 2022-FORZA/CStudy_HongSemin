#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b)
{
	return -(strcmp((char*)a, (char*)b));
};

int main() {
	char word[1000];
	char word2[1000];
	int tmp;
	int cnt = 0;
	while (1) {
		int t = 0;
		cnt++;
		scanf("%s", word);
		scanf("%s", word2);
		if (strlen(word) == 3 && strlen(word2) == 3 && word[0] == 'E' && word2[0] == 'E' && word[1] == 'N' && word2[1] == 'N' && word[2] == 'D' && word2[2] == 'D') {
			break;
		}
		qsort(word, strlen(word), sizeof(char), compare);
		qsort(word2, strlen(word2), sizeof(char), compare);
		for (int i = 0; i < strlen(word); i++) {
			if (word[i] != word2[i]) {
				t = 1;
			}
		}
		printf("Case %d:", cnt);
		if (t == 1) printf(" different\n");
		else printf(" same\n");
	}
}
