#include<stdio.h>

int main()
{
	int a, i;
	scanf("%d", &a);
	for (a = a; a >= 1; a--)
	{
		for (i = 1; i <= a; i++)
			printf("*");
		printf("\n");
	}
}