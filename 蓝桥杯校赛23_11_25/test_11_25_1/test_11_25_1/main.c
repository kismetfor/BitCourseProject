#define  _CRT_SECURE_NO_WARNINGS	1

#include <stdio.h>
#include <math.h>

int erjinzhi(int n) {
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (n & 1 == 1) {
			count++;
		}
		n = n >> 1;
	}

	return count;
	//printf("%d\n", count);
}

int bajinzhi(int n) {
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		switch (n & 7)
		{
			case 1:
				count += 1;
				break;
			case 2:
				count += 2; break;
			case 3:
				count += 3; break;
			case 4:
				count += 4; break;
			case 5:
				count += 5; break;
			case 6:
				count += 6; break;
			case 7:
				count += 7; break;
		default:
			break;
		}
		n = n >> 3;
	}
	return count;
}


void test3(void) {
	int count = 1;
	for (int i = 1; i < 99999; i++)
	{
		if (erjinzhi(i) == bajinzhi(i)) {
			if (count == 23)
			{
				printf("%d\n", i);
			}count++;
		}
	}
}


int main() {
	/*long long ret = pow(2, 2023);
	ret %= 1000;
	printf("%lld\n", ret);*/
	test3();

	return 0;
}