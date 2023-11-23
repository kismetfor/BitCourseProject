#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
		int a[5] = { 1, 2, 3, 4, 5 };
		int* ptr = (int*)(&a + 1); //对数组名取地址 取出的是整个数组的的地址,也就是在5后面四个字节了
		//sizeof(数组名) 取出的是整个数组,计算的是整个数组的大小
		printf("%d,%d", *(a + 1), *(ptr - 1));
		return 0;
	return 0;
}