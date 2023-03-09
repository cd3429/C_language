#include<stdio.h>

main()
{
	
	int i,j,s,space=4,d,d0=1 ;
	
	for(i=1;i<=5;i++)
	{
		d=d0;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space--;
		
		for(j=i;j>=1;j--)
		{
			printf("%d",d);
			d++;
		}
		
		printf("\n");
	}
	
	space= 1 ;
	
	d0=2 ;
	
	for(i=4;i>=1;i--)
	{
		d=d0;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space++;
		
		for(j=i;j>=1;j--)
		{
			printf("%d",d);
			d++;
		}
		d0++;
		printf("\n");
	}
	
	
}
