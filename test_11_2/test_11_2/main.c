#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void a(char* a, char* b) {
	a = b;
	(*a)++;
}
int main() {
	char ch1 = 'c';
	char ch2 = 'B';
	char* p1 = &ch1;
	char* p2 = &ch2;
	a(p1, p2);
	printf("%c %c", ch1, ch2);
	return 0;
}