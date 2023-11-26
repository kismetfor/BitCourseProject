#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define f1(x,y) (x)*(y)


void test2(void) {
	int a = 5, b = 8;
	int c = ++a + b++;
	printf("%d %d %d", a, b, c);
}

int y(int n) {
	return n < 10 ? n : y(n / 10) + n % 10;
}
//
//int f(int* p) {
//	int i, s = 0;
//	for ( i = 0; i < 5; i++, p++)
//	{
//		s += y(*p);
//	}
//	return s;
//}

void test3(void) {
	int a[5] = { 1314, 520, 886, 5257, 168 };
	printf("%d", f(a));
}

void test4(void) {
	int a, b, c, s;
	s = scanf("%2d%1d%3d", &a, &b, &c);
	printf("%d %d %d %d", a, b, c, s);
}

void test5(void) {
	//int a = XABC;
}


int f2(int x, int y) {
	return x * y;
}
void test8(void) {
	int a = 3, b = 5, c;
	c = f1(a, a + 2) + f2(b, b + 2);
	printf("%d", c);
}

void test10(void) {
	printf("%d", strlen("I\'m\40\103hinese"));
}

void test11(void) {
	int x = 25, y = 26, z = 37, p;
	if (x >= 20)
		if (y < 30) p = 1;
		else p = 2;
	else if (x >= 10)
		if (y > 28) p = 3;
		else p = 4;
	else
		p = 5;
	printf("%d", p);
}

void test12(void) {
	int a, b, c;
	scanf("%d年%d月%d日", & a, &b, &c);
	printf("%04d年%02d月%02d日", a, b, c);
}

void test13(void) {
	char c[] = "\1A\11B\111C\1111D";
	int a = strlen(c);
	int b = sizeof(c);
	printf("%d %d", a, b);
}

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

int main() {
	test14();
	return 0;

}