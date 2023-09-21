#include<stdio.h>

int main()
{
	int i,a[10],odd=0,even=0,sum=0;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("enter value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<10 ; i++)
     {
		if(i%2==0)
		{
			even+=a[i];
		}
		else
		{
			odd+=a[i];
		}
    }
	printf("\n sum of all even numbers = %d\n",even);
	printf("\n sum of all odd numbers = %d\n",odd);
	return 0;
}
