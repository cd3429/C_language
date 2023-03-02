#include<stdio.h>

main()
{
	
	int n,rem,div,rev,mynum;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	mynum = n ;
	
	while(n>0)
	{
		rem = n%10 ;
		div = n/10 ;
		rev= rev*10 + rem ;
		n = div ;
	}
	
	printf("\nThe reverse of the number is : %d",rev);
	
	if(mynum==rev)
	{
		printf("\nThe number is pelindrome");
	}
	else
	{
		printf("\nThe number is not pelindrome");
    }
}
