#include <stdio.h>


void print(int year)
{
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        printf("this year leep year");
    }
    else
    {
         printf("this year is not leep year");
    }
}

int main()
{
    int year;
    printf("enter value:");
    scanf("%d",&year);
    print(year);
}
