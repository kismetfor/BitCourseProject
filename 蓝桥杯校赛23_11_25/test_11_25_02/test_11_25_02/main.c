#define _CRT_SECURE_NO_WARNINGS 1

//�� 2 * *2023 % 1000���� 2��2023�η�����1000��������

#include <stdio.h>

int main() {
	int i;
	int ret = 1;
	for (int i = 0; i < 2023; i++)
	{
		ret *= 2;
		ret %= 1000;
		//printf("%d\n", ret);
	}
	printf("%d\n", ret);
	return 0;
}