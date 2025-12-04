//to perform conditional operators by 3 values
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("the biggest value is: %d",max);
	return 0;
}	
