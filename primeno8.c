#include<stdio.h>
main()
{
	int i,n,num=0;
	printf("enter number");
	scanf("%d",&n);
	if(n==0 && n)
	{
		printf("%d is not a prime number",n);
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				num=1;
			}
		}
		if(num==0)
		{
			printf("%d is a prime number",n);
		}
		else
		{
			printf("%d is not a prime number",n);
		}
	}
}
