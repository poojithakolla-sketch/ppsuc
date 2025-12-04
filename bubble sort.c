//to perform bubble sorting
#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("enter no.of array elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
