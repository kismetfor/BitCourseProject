#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int weishu(int n) {
	int ret = 1;
	while (n/=10)
	{
		ret++;
	}
	return ret;
}

int my_pow(int n) {
	int ret = 1;
	for (int i = 0; i < n; i++)
	{
		ret *= 10;
	}return ret;
}

void test(void) {
	int n;
	scanf("%d", &n);
	int m = weishu(n); 
	int ret = 0;
	int digit = 0;
	int index = 0;
	for (int i = 0; i < m; i++)
	{
		ret = n % 10;
		if (i % 2 == 0) {
			digit += ret * my_pow(index);
			index++;
		}
		n /= 10;
	}
	printf("%d", digit);
}

int main() {
	test();

	return 0;
}