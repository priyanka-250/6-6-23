#include<stdio.h>

main()
{
	int i=0,n,l,f; 
	printf("enter number=");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
	   n=n/10;
    }
    f=n;
    i=f+l;
	printf("first and last no=%d",i);
	i++;	
	}

