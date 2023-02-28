

#include<stdio.h>

main()

{
	
	int i=1 , N ;
	
	printf("Enter the value of N : ");
	scanf("%d",&N);
	
	
	
	do
	{
		if (i%2!=0)
		{
		printf("%d ",i);
		}
		i++ ;
	}
	while(i<=N);
	
	
}
