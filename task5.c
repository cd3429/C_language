// Dev C++
// WAP to find max. from given 3 no. using ternary operator.

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
	
	(a>b&&a>c)?printf("a is maximum")
			  :(b>c)?printf("b is maximum")
					:printf("c is maximum");
										   
}
