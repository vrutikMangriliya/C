#include<stdio.h>

void arr(char str[50],int i,int length)
{
    for(i=0 ; str[i]!='\0' ; i++)
    {
        printf("str[%d] value is:%c\n",i,str[i]);
        length=i;
    }
    printf("length of the string:%d",i);
}

int main()
{
    int i , length;
    char str[50];

    printf("enter str value:");
    scanf("%[^\n]s",&str);

    arr(str,i,length);
}
