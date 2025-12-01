#include<stdio.h>
#define PI 3.14
int main()
{
	//declare variables
	float b,h,area;
	printf("enter base and height(in cm):");
	scanf("%f%f",&b,&h);
	area=(0.5*b*h);
	printf("Area of triangle=%.2fcm\n",area);
	return 0;
}
