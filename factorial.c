#include<conio.h>
#include<stdio.h>
#define int n;
main()
{
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("factorials is %d",fact());

}
int fact()
{
	if(n<=1)
		return 1;
	else
		n=n*fact(n-1);
		return n;
}
