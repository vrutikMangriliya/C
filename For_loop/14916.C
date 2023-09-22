#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,a=0;

	printf("enter value");
	scanf("%d",&n);

	for(i=1 ; i<=n ;i++)
	{
		a=i*i;
		printf("%d, ",a);
	}
	return 0;

}

