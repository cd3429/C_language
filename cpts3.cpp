
/* Patterns

12345 54321
2345   5432
345     543
45       54
5         5

*/

#include<stdio.h>

main()

{
	
	int n,space,i,j,k,l;
	
	printf("Enter a number between : "); scanf("%d",&n);
	
	space = 0 ;
	
	for( i=1 ; i<=n ; i++)
	{

		for(j=i ; j<=n ; j++)
		{
			printf("%d",j);
		}
		
		for(k=1 ; k<=space ; k++)
		{
			printf(" ");
		}
		
		for(l=j-1 ; l>=i ; l--)
		{
			printf("%d",l);
		}
		
		space+=2;
		printf("\n");
		
	}
	

}

