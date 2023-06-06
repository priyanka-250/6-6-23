#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	
	printf("enter string=");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("this is string is palindrome");
	}
	else
	{
		printf("this string is not palindrome");
	}
}
