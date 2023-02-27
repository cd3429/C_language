

#include<stdio.h>

main()

{
	
	int i = 1 , N , sum = 0 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	while(i<=N)
	{
		
		sum = sum + i ;
		i++;
		
	}
	
	printf("The sum is %d",sum);
	
	
}
