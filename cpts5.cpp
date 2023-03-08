#include<stdio.h>

main()

{
	
	int i,j,s,space=0;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		space+=2;
	}
	
	space-=4;
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		space-=2;
	}
	
	
	
	
	
	
	
}
