#include <stdio.h>


void print(char a)
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'||
       a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("vowel");
    }
    else
    {
         printf("constent");
    }
}

int main()
{
    char a;
    printf("enter character:");
    scanf("%c",&a);
    print(a);
}
