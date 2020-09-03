#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	int a, b, c, d, e, f, g, i;
	for (i = 1;i <= N;i++)
	{
		for (a = N - 1;a >= i;a--)
		{
			printf("  ");
		}
		for (b = 1;b <= i;b++)
		{
			printf("* ");
		}
		for (c = 1;c <= i - 1;c++)
		{
			printf("* ");
		}
		for (d = N - 1;d >= i;d--)
		{
			printf("  ");
		}
		printf("\n");
	}
	for (i = 1;i < N;i++)
	{
		for (a = 1;a <= i;a++)
		{
			printf("  ");
		}
		for (b = N - 1;b >= i;b--)
		{
			printf("* ");
		}
		for (c = N - 2;c >= i;c--)
		{
			printf("* ");
		}
		for (d = 1;d <= i;d++)
		{
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}