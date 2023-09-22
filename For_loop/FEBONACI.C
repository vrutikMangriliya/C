#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,a=0,b=1,c;

	printf("enter value");
	scanf("%d",&n);
		c=a+b;
		printf("%d\n",c);
	for(i=1 ; i<=n ; i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
}