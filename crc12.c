#include<stdio.h>

main()
{
	
	int i,j,s,space=0,d ;
	
	for(i=5;i>=1;i--)
	{
		d=1;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space++;
		
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d++;
		}
		printf("\n");
	}
	
	
}
