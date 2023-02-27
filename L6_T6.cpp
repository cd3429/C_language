

#include<stdio.h>

main()

{
	
	int i , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	i = N ;
	
	while(i>=1)
	{
		if (i%2==0)
		{
		printf("%d ",i);
		}
		i-- ;
	}
	
	
}
