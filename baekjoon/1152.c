#include<stdio.h>

int main()
{
	char a[1000000] = { NULL };
	int i = 0, b = 0;
	while (1)
	{
		scanf("%c", &a[i]);
		if (a[i] == 10)
			break;
		i++;
	}
	i = 0;
	while(1)
	{
		if (a[i] == 10 || a[i] == 32)
		{
			if (a[i + 1] == 10 || a[i + 1] == 0)
				break;
		}
		if (a[i] == 32)
			b++;
		i++;
	}
	printf("%d", b + 1);
}