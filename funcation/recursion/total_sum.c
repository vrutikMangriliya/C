#include<stdio.h>
int a;
int sum=0;
int total(int a)
{
    if (a==4)
    {
        return 0;
    }
    return total(++a);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter value %d : ",i+1);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("total sum=%d",sum);
}