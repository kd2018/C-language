#include<conio.h>
#include<stdio.h>
main()
{
	int temp,n,rev=0,x;
	printf("Enter the number=:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		x=n%10;/* 121 are 1*/
		
		rev=rev*10+x;
		n=n/10;
		
	}
	/*
	if(temp==rev)
	{
		printf("the given number is %d,is a palindrome\n",rev);
	}
	else
	{
		printf("the given number is %d is not palindrome",rev);
	}
	*/
}
