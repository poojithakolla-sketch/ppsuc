//to make calculator by switch case
/* 1 denotes to addition , 2 denotes subtraction ,3 denotes to multiplication , 4 denotes to division 
and 5 denotes to modulus*/
#include<stdio.h>
int main()
{
	int num1,num2;
	int operation;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("enter the operation");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:printf("the sum of %d and %d is: %d",num1,num2,num1+num2);
                 break;		
		case 2:printf("the difference between %d and %d is: %d",num1,num2,num1-num2);
		         break;
		case 3:printf("the product of %d and %d is: %d ",num1,num2,num1*num2);
		         break; 
		case 4:printf("the division of %d and %d is: %d",num1,num2,num1/num2);
		         break;
		case 5:printf("the modulus of %d and %d is: %d",num1,num2,num1%num2);
		         break;
		default:
			{
				printf("invalid operation!");
			}
	}
	return 0;
}
