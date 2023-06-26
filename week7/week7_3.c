#include <stdio.h> 
#include <string.h> 

int main() {
    char num[100];
    gets(num);
    int cnt = strlen(num);
    int i;
    for (i = 0; i < strlen(num); i++) {
        if (num[i] == '=') {
            if (num[i - 1] == 'c') cnt--;
            if (num[i - 1] == 's') cnt--;
            if (num[i - 1] == 'z') {
                cnt--;
                if (num[i - 2] == 'd') cnt--;
            }
        }
        if (num[i] == '-') {
            if (num[i - 1] == 'c') cnt--;
            if (num[i - 1] == 'd') cnt--;
        }
        if (num[i] == 'j') {
            if (num[i - 1] == 'l') cnt--;
            if (num[i - 1] == 'n') cnt--;
        }
    }
    printf("%d\n", cnt);
}
