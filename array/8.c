#include<stdio.h>

int main()
{
	int i,j,a[5][5],sum=0;

	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("enter a value of arr[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			if(i<j)
			{ sum+=a[i][j]; }
		}
	}
	printf("sum of uper triangle:%d ",sum);
		
	return 0;
}
