#include<stdio.h>
void print(int i,int a)
{
    for ( i = 65; i<=90; i++)
    {
        {
            a=i+32;
            printf("%c=%c, ",i,a);
        }
    }
}
int main()
{
    int i,a;
    print(i,a);
}