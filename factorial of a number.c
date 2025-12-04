//to find factorial of the given number
#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact=1;
	printf("enter the number");
	scanf("%d",&n);
	if(n<0)
	{
		printf("factorial of negative number are not exists");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
		printf("the factorial of the given number is %llu",fact);
	}
	return 0;
}
