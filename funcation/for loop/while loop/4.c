#include<stdio.h>
void print(int i,int n)
{
    while (i<=n)
    {
        if (i%2!=0)
        {
             printf("%d, ",i);
        }
        i++;
    } 
}
int main()
{
    int i=1,n;
    printf("enter value:");
    scanf("%d",&n);
    print(i,n);
}
