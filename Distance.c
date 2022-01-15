#include<conio.h>
#include<stdio.h>
void main()
{
	// kilometer 1000km
	//meter      1000cm
	
	int distance;
	printf("\n Enter the distance(in cm)?");
	scanf("%d",&distance);
	printf("The Distance are meter= %d",distance/1000);
	printf("The distance are kilomete=%f",(distance/1000)/1000);
}
