#include<math.h>
#include<stdio.h>
void main()
{
	int base,exp;
	float f;
	printf("\n Enter The Number:");
	scanf("%d",&base);
	printf("\n Enter The Number Exp:");
	scanf("%d",&exp);
	f=pow(base,exp);
	printf("%.1lf^%.1lf = %.2lf", base, exp, f);
}
