#include<stdio.h>

main()
{
	
	int i,j,d=5 ;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",d);
		}
		d--;
		printf("\n");
	}
	
	
}
