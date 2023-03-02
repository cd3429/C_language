#include<stdio.h>

main()
{
	
	int n,rem,div,count=0 ;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem = n%10 ;
		div = n/10 ;
		n = div ;
		count++ ;
	}
	
	printf("\nFor given number the number of digits are %d",count);
	
	
}
