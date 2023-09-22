#include <stdio.h>


void dataset(int lenght, int width)
{
    int b;
    b=lenght*width;
    printf("area of rectangle:%d\n",b);
}

int main()
{
    int lenght, width;
         printf("enter lenght:");
         scanf("%d",&lenght);

         printf("enter width:");
         scanf("%d",&width);
    dataset(lenght,width);
}
