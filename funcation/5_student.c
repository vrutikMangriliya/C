#include<stdio.h>
void arr(int i,int eng[5],int guj[5],int state[5],int total[5],int per[5])
{  
      for(i=0 ;i<5 ;i++)
    
   {
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i,eng[i],guj[i],state[i],total[i],per[i]);
    if(per[i]<=35)
    {
        printf("student is fail");
    }
    else if(per[i]>=90)
    {
        printf("Grade A");
    }
    else if(70<=per[i]<=90)
    {
        printf("Grade B");
    }
    else if(50<=per[i]<=70)
    {
        printf("Grade C");
    }
    else if(40<=per[i]<=50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade E");
    }
   }
}
int main()
{
    int i,eng[5],guj[5],state[5],total[5],per[5];

    for(i=0 ; i<5 ; i++)
    {
        printf("enter %d students marks\n",i+1);

        printf("enter english subject marks:");
        scanf("%d",&eng[i]);

        printf("enter gujarati subject marks:");
        scanf("%d",&guj[i]);

        printf("enter state subject marks:");
        scanf("%d",&state[i]);

        total[i]=eng[i]+guj[i]+state[i];
        per[i]=total[i]*100/300;
    }
    printf("\nNo.\teng\tguj\tstate\ttotal\tper\tgrade\n");

    arr(i,eng,guj,state,total,per);
}
