#include<stdio.h>
void print(int i,int j)
{
    for ( i = 65; i<=69; i++)
    {
        for ( j = 65; j<=69; j++)
        {
            printf("%3c",i);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    print(i,j);
}
