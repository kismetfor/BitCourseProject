#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
		int a[5] = { 1, 2, 3, 4, 5 };
		int* ptr = (int*)(&a + 1); //��������ȡ��ַ ȡ��������������ĵĵ�ַ,Ҳ������5�����ĸ��ֽ���
		//sizeof(������) ȡ��������������,���������������Ĵ�С
		printf("%d,%d", *(a + 1), *(ptr - 1));
		return 0;
	return 0;
}