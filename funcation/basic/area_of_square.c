#include <stdio.h>


void dataset(int side)
{
    int b;
    b=side*side;
    printf("area of square:%d\n",b);
}

int main()
{
    int side;
        printf("enter side:");
    scanf("%d",&side);
    dataset(side);
}
