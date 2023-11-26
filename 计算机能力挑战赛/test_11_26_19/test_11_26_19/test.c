#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test(void) {
	int n;
	int sum = 0;
	while (scanf("%d", &n)!=EOF)
	{
		if (n > 0) {
			sum += n;
		}
	}
	printf("%d", sum);
}

int main() {
	test();

	return 0;
}