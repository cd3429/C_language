//Dev-C++

#include<stdio.h>

main()

{
	
	int a ;
	float b ;
	
	printf("Program to check if the given number is natural.\n\n");
	
	printf("Enter the value of : ");
	scanf("%f",&b);
	
	a = b ;  // to covert float into interger
	
	if(a!=b) 
		{
			printf("\nThe given input is not a natural number.");
		}
	else if(b<=0)
		{
			printf("\nThe given input is not a natural number.");
		}
	else
		{
			printf("\nThe given input is a natural number.");
		}
}
