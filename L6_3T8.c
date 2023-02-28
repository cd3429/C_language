

#include<stdio.h>

main()

{
	
	int i , N , sum = 0 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	for(i=1 ; i<=N ; i++)
	{
		
		sum = sum + i ;
		
	}
	
	printf("The sum is %d",sum);
	
}
