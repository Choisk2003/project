#include<stdio.h>

int main()
{
	int x, y, i, sum = 0;
	scanf("%d %d", &x, &y);
	for (i = 1; i <= x; i++)
	{
		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 9 || i == 11)
		{
			sum += 31;
		}
		else if (i == 3)
		{
			sum += 28;
		}
		else if(i == 5 || i == 7 || i == 12 || i == 10)
		{
			sum += 30;
		}
	}
	sum += y;
	if (sum % 7 == 1)
		printf("MON");
	else if (sum % 7 == 2)
		printf("TUE");
	else if (sum % 7 == 3)
		printf("WED");
	else if (sum % 7 == 4)
		printf("THU");
	else if (sum % 7 == 5)
	 	printf("FRI");
	else if (sum % 7 == 6)
		printf("SAT");
	else if (sum % 7 == 0)
		printf("SUN");
}