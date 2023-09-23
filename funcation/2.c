#include<stdio.h>
void print(int i,int j)
{
    for ( i = 5; i>=1; i--)
    {
        for ( j = 5; j>=2; j--)
        {
            printf("%3d",i);
        }
        printf("\n");
    } 
}
int main()
{
    int i,j;
    print(i,j);
}
