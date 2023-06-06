#include<stdio.h>

main()
{
	int f1=0,f2=1,f3,n,i; 
	printf("enter number=");
	scanf("%d",&n);
	printf("%d%d",f1,f2);
	for(i=2;i<n;i++)
	{
		f3=f1+f2;
		printf("\n%d",f3);
		f1=f2;
		f2=f3;
	}
	
}

