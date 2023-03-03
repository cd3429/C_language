/*

0
01
010
0101
01010

*/



#include<stdio.h>

main()

{
	
	int i,j ;
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			if(j%2==0)
			{
			printf("1 ");
		    }
		    else
		    {
		    printf("0 ");
			}
		}
		printf("\n");
	}
		
}
