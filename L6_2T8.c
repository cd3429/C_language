

#include<stdio.h>

main()

{
	
	int i = 1 , N , sum = 0 ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	do
	{
		
		sum = sum + i ;
		i++;
		
	}
	while(i<=N);
	printf("The sum is %d",sum);
	
	
}
