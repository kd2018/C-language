#include<stdio.h>
long calculate_sum(int [],int);
int main()
{
	int n,c,array[100];
	long result;
	sacnf("%d",&n);
	for(c=0;i<n;i++)
	{
		scanf("%d",&arrays[c]);
		result=calculate_sum(array,n);
		printf("Sum =%d\n",result);
		return 0;
	}
	long calculate_sum(int a[],int n)
	{
		static long_sum=0;
		if(n==0)
		{
			return sum;
			sum=sum+a[n-1];
			return calculate_sum(a,--n);
		}
	}
}
