#define  _CRT_SECURE_NO_WARNINGS	 1

#include <stdio.h>

int my_pow(int n) {
	int ret = 1;
	for (int i = 0; i < n; i++)
	{
		ret *= 10;
	}
	return ret;
}


int weishu(long long n) {
	int ret = 1;
	while (n /= 10)
	{
		ret++;
	}return ret;
}

long long chengji(long long n) {
	long long ret = 1;
	int m = weishu(n); 
	int a = 1; //ÿһλ
	for (int i = 0; i < m; i++)
	{
		a = n/my_pow(m-i-1);
		if (a != 0) {
			ret *= a;
		}
		n -= a * my_pow(m - i - 1);
	}
	return ret;
}

int main() {
	long long n;
	scanf("%lld", &n);
	long long sum = 1;
	sum = chengji(n);
	printf("%lld\n", sum);
	while (1)
	{
		if (sum<10)
		{
			break;
		}
		sum = chengji(sum);
		printf("%lld\n", sum);
	}

	return 0;
}