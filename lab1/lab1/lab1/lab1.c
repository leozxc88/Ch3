#include<stdio.h>
#include<stdlib.h>

int odd(int U);
int even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+......+n=?請輸入n=");
	scanf_s("%d", &n);
	getchar();
	printf("請問要做奇數和(O)還是偶數(E)還是整數合(I):");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case'O':
		Sum= odd(n);
		break;
	case'E':
		Sum = even(n);
		break;
	case'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("選擇錯誤");
		return -1;
	}
	printf("總和為%d\n", Sum);
	system("pause");
	return 0;
}

int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}

int TotalSum(int U)
{
	return odd(U) + even(U);
}