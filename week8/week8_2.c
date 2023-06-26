#include <stdio.h>
#include <string.h>

void normalize(char* s) {
	int i;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] <= 'Z')
			s[i] = s[i] + 'a' - 'A';
	}
}
int main() {
	int n;
	int t = 1;
	char alph[2001] = { 0 };
	int cnt[26] = { 0 };

	scanf("%s %d", alph ,&n);
	normalize(alph);
	for (int i = 0; i < strlen(alph); i++) {
		if (alph[i] == alph[i + 1]) {
			t++;
			continue;
		}
		else {
			if (cnt[alph[i] - 'a']) continue;
			else {
				cnt[alph[i] - 'a'] = 1;
				if (t >= n) printf("1");
				else printf("0");
				t = 1;
			}
		}
	}
}
