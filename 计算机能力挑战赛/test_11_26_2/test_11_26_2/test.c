#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int f(int n) {
	int k, s = 0;
	for (k = 1; k < n; k++)
	{
		if (n % k == 0) s += k;
	}
	return s;
}

void test14(void) {
	int i;
	for (i = 20; i < 30; i++)
	{
		printf("%d ", f(i));
	}
}

void test15(void) {
	int a[100];
	scanf("%d", a+5);
	printf("%d", a[5]);
}

int main() {
	test15();
	return 0;

}