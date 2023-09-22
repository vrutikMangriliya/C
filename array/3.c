#include<stdio.h>

int main()
{
	int i,even=0,odd=0,a[10];

	for(i=0 ; i<10 ; i++)
	{
		printf("element %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<10 ; i++)
	{
		if(a[i]%2==0)
			even += a[i];
		else
			odd += a[i];

	}
		printf("\n sum of odd number are %d",odd);
		printf("\n sum of even number are %d",even);
	return 0;
}