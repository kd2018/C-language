#include<conio.h>
#include<stdio.h>
main()
{
	char c[100],rev;
	int i;
	printf("\n Enter the number:?");
	scanf("%s",&c);
	rev="";
	printf("length of string",strlen(c));
	for(i=0;c[i]='\0';i++)
	{
		c=i+rev;
		if(c==rev)
		{
			printf("Yes it is the palindrome number");
		}
		else
		{
			printf("Not palindrome number");
		}
	}
}
