

#include<stdio.h>

main()

{
	
	int i = 1 , N , fac = 1 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	while(i<=N)
	{
		
		fac = fac*i ;
		i++;
		
	}
	
	printf("The factorial is %d",fac);
	
	
}
