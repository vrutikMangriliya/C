#include<stdio.h>

int printnum(int a)
{
    printf("%d,",a);

    if(a==50)
    {
        return a;
    }
    return printnum (++a);
}
int main()
{
    int a=0;
    printnum(a);
}