#include<stdio.h>

int main()
{
	int i,sum=0,a[10];

	for(i=1 ; i<10 ; i++)
	{
		printf("element %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=1 ; i<10 ; i++)
	{
		sum+=a[i];
	}
		printf("sum of all elements :%d\n",sum);
	return 0;
}