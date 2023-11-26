#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int weishu(int n) {
	int ret = 1;
	while (n /= 10)
	{
		ret++;
	}return ret;
}

int my_pow(int m) {
	int ret = 1;
	for (int i = 0; i < m; i++)
	{
		ret *= 10;
	}
	return ret;
}


int main() {
	int a;
	scanf("%d", &a);
	int m = weishu(a);
	int digit = 0; //获取每一位
	int out[10] = { 0 };
	int index = 0;
	for (int i = 0; i < m; i++)
	{
		digit = a / my_pow(m - 1 - i);
	/*	if (i % 2 == 0) {
			out[index] = digit;
			index++;
		}*/
		a -= digit* my_pow(m - 1 - i);
	}
	for (int i = 0; i < index; i++)
	{
		/*if (out[i] != 0) {
			printf("%d", out[i]);
		}*/
		printf("%d", out[i]);
	}
	return 0;
}
