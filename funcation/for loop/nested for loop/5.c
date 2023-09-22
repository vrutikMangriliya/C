#include<stdio.h>
void print(int i,int j,int k)
{
    for ( i = 1; i<=5; i++)
    {
        for ( j = 1; j<=5; j++,k++)
        {
            printf("%3d",k);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,k=1;
    print(i,j,k);
}
