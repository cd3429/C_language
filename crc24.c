#include<stdio.h>

main()
{
	
	int i,j,k,s,space=4,d,d0=5; ;
	
	for(i=1;i<=5;i++)
	{
		d=d0;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space--;
		
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d--;
		}
		d+=2;
		if(i>=2)
		{
		for(k=d;k<=5;k++)
		{
			printf("%d",k);
		}
	    }
		printf("\n");
	}
	
}
