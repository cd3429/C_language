// Dev C++
// WAP to find min. from given 5 no. using nested if else.

#include<stdio.h>

main()

{
	
	int a,b,c,d,e ;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	printf("Enter the value of e : ");
	scanf("%d",&e);
	
	if(a<b&&a<c&&a<d&&a<e)
	{
		printf("a is minimum") ;
	}
	else
	{
		if(b<c&&b<d&&b<e)
		{
		printf("b is minimum");
	    }
	    else
	    {
			if(c<d&&c<e)
			{
			printf("c is minimum");
			}
			else
			{
				if(d<e)
				{
				printf("d is minimum");
				}					
				else
				{
				printf("e is minimum");
			    }
			}
		}
    }   
										   

}
