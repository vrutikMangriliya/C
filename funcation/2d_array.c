#include<stdio.h>
int array[3][3];
int sum=0;
int arr(int a)
{
    if (a==2)
    {
        return 0;
    }
    return arr(++a);
   
}
int arr2(int b)
{
     if (b==2)
    {
        return 0;
    }
   return arr(++b);
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nenter value a[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",array[i][j]);
        }   
          printf("\n");
    }
}