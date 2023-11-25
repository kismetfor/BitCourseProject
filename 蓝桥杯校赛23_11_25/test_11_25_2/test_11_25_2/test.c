#define  _CRT_SECURE_NO_WARNINGS	1


/*
对于以下这些数（6行，每行6个，共36个），请问约数个数最多的是哪个？（如果有多个，请回答出现最早的那个）
　　393353 901440 123481 850930 423154 240461
　　373746 232926 396677 486579 744860 468782
　　941389 777714 992588 343292 385198 876426
　　483857 241899 544851 647930 772403 109929
　　882745 372491 877710 340000 659788 658675
　　296521 491295 609764 718967 842000 670302
  */

#include <stdio.h>
#include <math.h>

int a[36];


int yueshu(int n) {
	int count = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}

int main() {
	for (int i = 0; i < 36; i++)
	{
		scanf("%d", a + i);
	}
	int max = 0;
	int index = 0;
	//for (int i = 0; i < 36; i++)
	//{
	//	printf("%d ", *(a + i));
	//}
	//printf("\n");
	for (int i = 0; i < 36; i++)
	{
		if (yueshu(a[i]) > max) {
			max = yueshu(i);
			index = i;
		}
	}
	printf("%d\n", *(a + index));
	return 0;
}
