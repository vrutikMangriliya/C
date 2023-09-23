#include<stdio.h>
void print(int i,int n)
{
    for ( i = 0; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d, ",i);
        }
    }
}
int main()
{
    int i,n;
    printf("enter value:");
    scanf("%d",&n);
    print(i,n);
}