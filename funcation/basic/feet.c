#include <stdio.h>

void dataset(int feet)
{
    int b;
    b=feet*12;
    printf("value of feet:%d\n",b);
}

int main()
{
    int feet;
        printf("enter feet:");
    scanf("%d",&feet);
    dataset(feet);
}
