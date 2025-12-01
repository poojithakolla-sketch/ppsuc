//to print biggest of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is biggest value");
		}
		else
		{
			printf("c is biggest value");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is biggest value");
		}
		else
		{
			printf("c is biggest value");
		}
		return 0;
		
	}
}
