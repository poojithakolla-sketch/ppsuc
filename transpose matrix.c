//to transpose a matrix
#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],i,j;
	printf("enter array elements to matrix a");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("the transposed matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
