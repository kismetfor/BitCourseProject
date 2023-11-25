#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	/*long long n;
	scanf("%lld", &n);
	int ret = n<<1;
	printf("%lld\n", &ret);*/
	int n;
	scanf("%d", &n);
	int ret = n / 100000;
	n = (n - ret * 100000) * 10 + ret;
	printf("%d\n", n);
	return 0;
}