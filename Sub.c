#include<conio.h>
#include<stdio.h>
int main(void)
{
	char name[100]="Anil Kumar";
	
	printf("%c",*name);
	printf("%c",*(name+1));
	printf("%c",*(name+3));
	char *namePTR;
	namePTR=name;
	printf("%c", *namePTR);     // Output: H
 	printf("%c", *(namePTR+1));   // Output: a
  	printf("%c", *(namePTR+7));
	return 0;
	getch();
}
