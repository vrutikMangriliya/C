#include <stdio.h>


void print(int side1 ,int side2,int side3)
{
    if(side1==side2 && side2==side3)
    {
        printf("triangle is equilateral");
    }
   else if(side1==side2 || side2==side3 || side3==side1)
    {
        printf("triangle is isosceles");
    }
    else
    {
        printf("tringle is scalene");
    }

}

int main()
{
    int side1,side2,side3;
    printf("side1 value:");
    scanf("%d",&side1);

    printf("side2 value:");
    scanf("%d",&side2);

    printf("side3 value:");
    scanf("%d",&side3);

    print(side1,side2,side3);
}
