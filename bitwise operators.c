//to perform bitwise operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	printf("the and value is %d\n",(a&b));
	printf("the or value is %d\n",(a|b));
	printf("the xor value is %d\n",(a^b));
	printf("the 1'scomplement value is %d\n",(~a));
	printf("the left shift value is %d\n",(a<<2));
	printf("the right shift value is %d\n",(a>>2));
	return 0;
}
