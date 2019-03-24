#include<stdio.h>

int main()
{
	int a, i, ii = 1;
	scanf("%d", &a);
	for (a = a; a >= 1; a--)
	{
		for (i = 1; i <= ii; i++)
			printf("*");
		ii++;
		printf("\n");
	}
}