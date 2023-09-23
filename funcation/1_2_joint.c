#include <stdio.h>
int main()
{
	char str1[500] , str2[500],str3[500];

	int i = 0, j = 0;

    printf("enter str1 value: ");
    scanf("%s",&str1);

    printf("enter str2 value: ");
    scanf("%s",&str2);

    for(i=0 ; str1[i]!='\0' ; i++)
    {
        str3[j]=str1[i];
        j++;
    }

    for(i=0 ; str2[i]!='\0' ; i++)
    {
        str3[j]=str2[i];
        j++;
    }
	str3[j] = '\0';
	printf("\n Concat String =%s ", str3);
	return 0;
}