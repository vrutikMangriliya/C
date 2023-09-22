#include <stdio.h>


void print(int i)
{
    if(i%5==0)
    {
        printf("yes");
    }
    else
    {
         printf("no");
    }
}

int main()
{
    int i;
    printf("enter value:");
    scanf("%d",&i);
    print(i);
}
