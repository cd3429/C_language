#include<stdio.h>

main()
{
	
	int i,j,count='A' ;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",count);
		}
		count++;
		printf("\n");
	}
	
	
}
