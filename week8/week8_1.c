#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n;
	char game;
	char** name;
	scanf("%d %c", &n, &game);
	name = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		name[i] = (char*)malloc(sizeof(char) * 21);
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", name[i]);
	}
	int cnt = 1;

	for (int k = 1; k < n; k++) {
		if (strcmp(name[0], name[k]) != 0) {
				cnt++;
		}
		
	}
	
	if (game == 'Y') printf("%d", cnt);
	else if (game == 'F') printf("%d", cnt / 2);
	else if (game == 'O') printf("%d", cnt / 3);
	for (int i = 0; i < n; i++) {
		free(name[i]);
	}
	free(name);
	return 0;
}
