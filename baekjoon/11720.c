#include<stdio.h>

int main()
{
	int n, sum = 0;
	int a;
	scanf("%d", &n);
	for (n = n; n >= 1; n--)
	{
		scanf("%1d", &a);
		sum += (int)a;
	}
	printf("%d", sum);
}