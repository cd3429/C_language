#include<stdio.h>

main()
{
	
	int i,j,s,space=0,d,d1=1 ;
	
	for(i=5;i>=1;i--)
	{
	    d=d1;
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
		d1++;
		printf("\n");
	}
	
	
}
