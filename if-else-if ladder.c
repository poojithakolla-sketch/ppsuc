//to perform if-else-if ladder
#include<stdio.h>
int main()
{
	int n;
	printf("enter the percentage");
	scanf("%d",&n);
	if(n>95&&n<100)
	{
		printf("the grade is A");
	}else if(n>85&&n<95)
	{
		printf("the grade is B");
	}else if(n>75&&n<85)
	{
		printf("the grade is C");
	}else
	{
		printf("others");
	}
	return 0;
}
