#include<stdio.h>
void print(int i,int j)
{
    for ( i = 1; i<=10; i++)
    {
        for ( j = 1; j<=5; j++)
        {
        if(i%2!=0)
            {   
                printf("%3d",i);
            }
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    print(i,j);
}
