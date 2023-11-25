#define  _CRT_SECURE_NO_WARNINGS	 1

#include <stdio.h>
#include <math.h>


int n, m;
int r, c;
long long a[1000][1000];
int b[1000][1000]; //总和用来统计走过多少格

void swap(long long* a, long long* b) {
	long long temp = *a;
	*a = *b;
	*b = temp;
}


long long GCD(long long a, long long b) {
	if (a > b) {
		swap(&a, &b);
	}
	if (b % a == 0) {
		return a;
	}
	return GCD(b % a, a);
}

int sum_b(void) {
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ret += b[i][j];
		}
	}
	return ret;
}

int up(int i, int j) {
	if (i-1 < 0) {
		return 0;
	}
	if (GCD(a[i][j], a[i - 1][j]) > 1) {
		b[i - 1][j] = 1;
		return 1;
	}
}

int down(int i, int j) {
	if (i + 1 >n-1) {
		return 0;
	}
	if (GCD(a[i][j], a[i + 1][j]) > 1) {
		b[i + 1][j] = 1;
		return 1;
	}
}

int left(int i, int j) {
	if (j-1 < 0) {
		return 0;
	}
	if (GCD(a[i][j], a[i][j-1]) > 1) {
		b[i][j-1] = 1;
		return 1;
	}
}

int right(int i, int j) {
	if (j + 1 > m-1) {
		return 0;
	}
	if (GCD(a[i][j], a[i][j + 1]) > 1) {
		b[i][j + 1] = 1;
		return 1;
	}
}



int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &r, &c);
	r--;
	c--;
	b[r][c] = 1;
	//记录b有没有变化 没有变化就走不动了 可以break
	int change = sum_b();
	while (1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (b[i][j] == 1) {
					up(i, j);
					down(i, j);
					left(i, j);
					right(i, j);
				}
			}
		}
		if (sum_b() == n * m)
		{
			break;
		}
		if (sum_b() == change) {
			break;
		}
		change = sum_b();
	}


	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}*/

	printf("%d\n", change);
	return 0;
}