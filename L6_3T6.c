

#include<stdio.h>

main()

{
	
	int i , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	for(i=N ; i>=1 ; i--)
	{
		if (i%2==0)
		{
		printf("%d ",i);
		}
		
	}
	
}
