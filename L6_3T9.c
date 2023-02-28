

#include<stdio.h>

main()

{
	
	int i , N , fac = 1 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	for(i=1 ; i<=N ; i++)
	{
		
		fac = fac*i ;
		
	}
	
	printf("The factorial is %d",fac);
	
	
}
