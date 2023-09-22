#include<stdio.h>

int main()
{
	char str[50];
	int i,lengh;
	printf("enter str value:");
	scanf("%[^\n]s",&str);

	for(i=0 ; str[i]!='\0' ; i++)
	{
		printf("str[%d] value is:%c\n",i,str[i]);
		lengh=i;
	}

   		 printf("Length of the string: %d", i);

	return 0;
}


