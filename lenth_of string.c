#include<conio.h>
#include<stdio.h>
main()
{
	char str[100];
	int i;
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("Length of string is %d",strlen(str));
		
		return 0;
	}
}
