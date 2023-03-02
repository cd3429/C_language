#include<stdio.h>

main()

{
	
	int n,p,prime=1;
	
	printf("Enter a number : ");
	scanf("%d",&p);
	
	for(n=2;n<p;n++)
	{
		if(p%n==0)
		{
			prime=0;
		}
	}
	
	if(prime==0)
	{
		printf("The number is not prime.");
	}
	else
	{
		printf("The number is prime.");
	}
	
}
