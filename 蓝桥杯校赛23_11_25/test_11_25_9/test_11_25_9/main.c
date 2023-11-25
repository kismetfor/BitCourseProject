#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int a[100000];
int k;
int n;

int sum(int p) {
	int ret = 0;
	for (int i = p; i < p+k; i++)
	{
		ret += a[i];
	}
	return ret;
}

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int p;
	int max = 0;
	for ( p = 0; p < n-k+1; p++)
	{
		if (max < sum(p)) {
			max = sum(p);
		}
	}
	printf("%d\n", max);
	return 0;
}

