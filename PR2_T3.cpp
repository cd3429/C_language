#include<stdio.h>

main()

{
	int a,b,c,d ;
	
	printf("Enter a : "); scanf("%d",&a);
	printf("Enter b : "); scanf("%d",&b);
	printf("Enter c : "); scanf("%d",&c);
	printf("Enter d : "); scanf("%d",&d);
	
	if(a>b&&a>c&&a>d)
		{
			printf("a is max");
		}
	else
		{
			if(b>c&&b>d)
			{
			printf("b is max");
		    }
		    else
		    {
		    	if(c>d)
		    	{
		    		printf("c is max");
				}
				else
				{
					printf("d is max");
				}
			}
		}
	
}
