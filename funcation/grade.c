#include <stdio.h>


void print(int marks)
{
    if(marks<0 || marks >100)
    {
        printf("wrong entry");
    }
   else if(marks<35)
    {
        printf("Grade FAIL");
    }
   else if(marks>=35 && marks<45)
    {
        printf("Grade D");
    }
    else if(marks>=45 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<75)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }

}

int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);

    print(marks);
}
