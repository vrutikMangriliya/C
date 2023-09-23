#include<stdio.h>

void arr(int i,int a[10], int sum)
{
    for(i=0 ; i<10 ; i++)
    {
        sum+=a[i];
    }
    printf("\n sum of all elements:%d\n",sum);
    return 0;
}

int main()
{
    int i,a[10],sum=0;
    for(i=0 ; i<10 ; i++)
    {
        printf("enter value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    arr(i,a,sum);
}