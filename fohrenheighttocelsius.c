
#include<stdio.h>
void main()
{
	/*
		convert to the temperature in Celsius and convert to fohrenheit
		formula (0*9/5)+32 =32 'F
		(0'F-32)*5/9=-17.78 'C
		
	*/
	int cls,f,c;
	printf("Enter the Tempature are in Celsius:");
	scanf("%d",&cls);
	f=(cls*9/5)+32;
	c=(f-32)*5/9;
	printf("fohrenheiht  %d",f);
	printf("\nforenheight %d",c);
}
