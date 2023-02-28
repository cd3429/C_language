

#include<stdio.h>

main()

{
	
	int i , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	i = N ;
	
	do
	{
		if (i%2==0)
		{
		printf("%d ",i);
		}
		i-- ;
	}
	while(i>=1);
	
}
