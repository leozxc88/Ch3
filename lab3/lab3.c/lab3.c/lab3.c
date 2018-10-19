#include<stdio.h>
#include<stdlib.h>

long int re_f(int p);

void main(void)
{
	int m, n;
	long int a, b, c, ans;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = re_f(m);
	b = re_f(n);
	c = re_f(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}
long int re_f(int p)
{
	if (p > 1)
	{
		long int result = p * re_f(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}