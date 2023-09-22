#include<stdio.h>
void arr(int i,int j,int a[3][3],int sum)
{
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            if (i==j)
            {
                sum+=a[i][j];
            }
           printf("%d ",a[i][j]); 
        }
           printf("\n");
    }
            printf ("sum of diagonal elements:%d",sum);
}
int main()
{
    int i,j,sum=0,a[3][3];

   for(i=0 ; i<3 ; i++)
   {
        for(j=0 ; j<3 ; j++)
        {
            printf("enter value of arr [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
   }
    arr(i,j,a,sum);
}
