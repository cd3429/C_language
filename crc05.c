#include<stdio.h>

main()
{
	
	int i,j,d;
	
	for(i=5;i>=1;i--)
	{
		d=5 ;
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d--;
		}
		printf("\n");
	}
	
	
}
