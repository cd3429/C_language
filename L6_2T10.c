

#include<stdio.h>

main()

{
	
	int i = 1 , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	do
	{
		
		printf("%d x %d = %d\n",N,i,N*i);
		i++;
		
	}
	while(i<=10);
	
	
}
