

#include<stdio.h>

main()

{
	
	int i = 1 , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	while(i<=10)
	{
		
		printf("%d x %d = %d\n",N,i,N*i);
		i++;
		
	}
	
	
}
