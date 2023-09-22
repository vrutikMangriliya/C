
#include<stdio.h>
int array[5];
int sum=0;
int arr(int a)
{
    if (a==4)
    {
        return 0;
    }
    return arr(++a);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter value a[%d]: ",i);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("total sum=%d",sum);
}