

#include<stdio.h>

main()

{
	
	int i = 1 , N , fac = 1 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	do
	{
		
		fac = fac*i ;
		i++;
		
	}
	while(i<=N);
	
	printf("The factorial is %d",fac);
	
	
}
