#define  _CRT_SECURE_NO_WARNINGS	 1

#include <stdio.h>

int main() {
	char a[10000] = "0";
	scanf("%s", a);
	char ch = 'b';
	for (int i = 0; a[i]; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			ch = a[i];
		}
	}

	printf("%c\n", ch);
	return 0;
}