#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	for (a = a; a >= 1; a--)
	{
		scanf("%d", &c);
		if (c < b)
			printf("%d ", c);
	}
}