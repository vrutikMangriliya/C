#include<stdio.h>

void arr(int i,int a[10], int even, int odd)
{
    for(i=0 ; i<10 ; i++)
    {
        if(a[i]%2==0)
        {
            even+=a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
    printf("\n sum of all even number:%d\n",even);
    printf("\n sum of all odd number:%d\n",odd);
    return 0;
}

int main()
{
    int i,a[10],even=0,odd=0;
    for(i=0 ; i<10 ; i++)
    {
        printf("enter value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    arr(i,a,even,odd);
}
