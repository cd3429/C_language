
/* Patterns

1         1
21		 12
321     123
4321   1234
54321 12345

*/

#include<stdio.h>

main()

{
	
	int n,r,c,space,i,j,k,l;
	
	printf("Enter a number : "); scanf("%d",&n);
	
	r = n ; //row
	c = 2*r + 1 ; //column
	space = c - 3 ; //space
	
	for( i=1 ; i<=n ; i++ )
	{

		for(j=i ; j>=1 ; j--)
		{
			printf("%d",j);
		}
		
		for(k=1 ; k<=space ; k++)
		{
			printf(" ");
		}
		
		for(l=1 ; l<=i ; l++)
		{
			printf("%d",l);
		}
		
		space-=2;
		printf("\n");
		
	}
	

}

