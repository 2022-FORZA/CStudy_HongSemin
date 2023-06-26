#include <stdio.h>
#include <string.h>

int main()
{
	char text[30001], code[30001], key[30001], tmp;
	gets(text);
	scanf("%s", key);

	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == ' ')
			code[i] = ' ';
		else
		{
			char tmp = text[i] - (key[i % strlen(key)] - 'a') - 1;
			if (tmp < 'a')
				tmp += 26;
			code[i] = tmp;
		}
	}
	code[strlen(text)] = '\0';
	printf("%s", code);
	return 0;
}
