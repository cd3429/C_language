// Dev C++
// WAP to find max. from given 4 no. using nested if else.

#include<stdio.h>

main()

{
	
	int a,b,c,d ;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	if(a>b&&a>c&&a>d)
	{
		printf("a is maximum") ;
	}
	else
	{
		if(b>c&&b>d)
		{
		printf("b is maximum");
	    }
	    else
	    {
			if(c>d)
			{
			printf("c is maximum");
			}
			else
			{
			printf("d is maximum");
			}					
		}
    }   
										   

}
