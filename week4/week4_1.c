#include <stdio.h>
#include <string.h>

int main() {
	char r_rot[101];
	scanf("%[^\n]s", r_rot);
	for (int i = 0; i < strlen(r_rot); i++) {
		if (r_rot[i] >= 'N' && r_rot[i]<='Z'){
			r_rot[i] = 'A' + (13 - ('Z' - r_rot[i] + 1));
		}
		else if (r_rot[i] >= 'n' && r_rot[i]<='z') {
			r_rot[i] = 'a' + (13 - ('z' - r_rot[i] + 1));
		}
		else if (r_rot[i] >= 'A' && r_rot[i] < 'N') {
			r_rot[i] = r_rot[i] + 13;
		}
		else if (r_rot[i] >= 'a' && r_rot[i] <= 'n') {
			r_rot[i] = r_rot[i] + 13;
		}
	}
	printf("%s", r_rot);
}
