#include <stdio.h>


void sum(int doller)
{
    int b;
    b=doller*80;
    printf("value of doller:%d\n",b);
}

int main()
{
    int doller;
    printf("enter doller:");
    scanf("%d",&doller);
    sum(doller);
}
