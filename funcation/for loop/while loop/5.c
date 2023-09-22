#include<stdio.h>
void a(int i)
{
    while (i<=90)
    {
        printf(" %c ",i);
        i++;
    } 
}
int main()
{
    int i=65;
    a(i);
}