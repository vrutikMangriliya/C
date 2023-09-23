#include <stdio.h>


void dataset(float inches)
{
    float b;
    b=inches*2.54;
    printf("inches into cm:%f\n",b);
}

int main()
{
    float feet;
       printf("enter feet:");
      scanf("%f",&feet);
    dataset(feet);
}
