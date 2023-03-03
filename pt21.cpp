/*

A
A B
A B C
A B C D
A B C D E

*/



#include<stdio.h>

main()

{
	
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=65;j<=65+i;j++)
		{
		printf("%c ",j);
		}
		printf("\n");
	}
		
}
