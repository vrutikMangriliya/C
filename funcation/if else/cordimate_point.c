#include <stdio.h>


void print(int x ,int y)
{
    if( (x>0) && (y>0))
    {
        printf("cordimate point:1");
    }
    if( (x<0) && (y>0))
    {
        printf("cordimate point:2");
    }
    if( (x<0) && (y<0))
    {
        printf("cordimate point:3");
    }
     if( (x>0) && (y<0))
    {
        printf("cordimate point:4");
    }
}

int main()
{
    int x,y;
    printf("enter x value:");
    scanf("%d",&x);

    printf("enter y value:");
    scanf("%d",&y);
    print(x,y);
}
