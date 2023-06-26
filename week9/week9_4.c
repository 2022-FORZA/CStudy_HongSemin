#include <stdio.h>
#include <string.h>

int main() {
    int n, M;
    int l = 0;
    char arr[51][51];
    scanf("%d %d", &n, &M);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] != '.') {
                arr[i][M - j - 1] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}
