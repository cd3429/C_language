// Dev C++ 
// WAP to find min. from given 3 no. using nested if else.

#include<stdio.h>

main()

{
	
	int a,b,c ;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	if(a<b&&a<c)
	{
		printf("a is minimum");
	}
	else
	{
		if(b<c)
		{
		printf("b is minimum");
	    }
	    else
	    {
	    printf("c is minimum");
		}	
	}
}
