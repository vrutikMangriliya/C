#include <stdio.h>

int array [51];

int test (int a)
{
    printf("%d ,",array[a]);
    if(a==10)
    {
        return 0;
    }
    return test (++a);
}
int main()
{
    for (int i=0 ; i<10 ; i++)
            {
            array[i]=i+1;
            }
    test(0);
}