#include<conio.h>
#include<stdio.h>
main()
{
	int year;
	printf("Enter the year to check leap year?");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("%d I't is the leap year'",year);
	}
	else if(year%100==0)
	{
		printf("%d I't is the leap year'",year);
	}
	else if(year%4==0)
	{
		printf("%d it is the leap year");
	}
	else
	{
		printf("%d I't is not the leap year'",year);
	}
}
