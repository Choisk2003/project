#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int aa = 0, bb = 0;
	aa = (a / 100) + (((a % 100) / 10) * 10) + (((a % 100) % 10) * 100);
	bb = (b / 100) + (((b % 100) / 10) * 10) + (((b % 100) % 10) * 100);
	if (aa > bb)
		printf("%d", aa);
	else
		printf("%d", bb);
}