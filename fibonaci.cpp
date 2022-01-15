#include<conio.h>
#include<stdio.h>
main()
{
	int a=0,b=1,c,n,count;
	printf("\nenter the number?");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("The febonaci serices is %d",c);
		printf("%d %d",a,b);
	}
		
}
