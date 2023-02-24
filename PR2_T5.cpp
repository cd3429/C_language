#include<stdio.h>

main()

{
	
	float a,b,c,b1,b2,b3,b4,sum ;
	
	printf("Enter a value : "); scanf("%f",&a);
	
	if(a>0 && a<=50)
		{
			b1 = 0.50*a ;
			b = b1 ;
		}
	else if(a>50 && a<=150)
		{
			c = a - 50 ;
			b1 = 50*0.50 ;
			b2 = c*0.75 ;
			b = b1+b2 ;
		}
	else if(a>150 && a<=250)
		{
			c = a - 50 -100 ;
			b1 = 50*0.50 ;
			b2 = 100*0.75 ;
			b3 = c*1.20 ;
			b = b1+b2+b3 ;
		}
	else if(a>250)
		{
			c = a -50 -100 -100 ;
			b1 = 50*0.50 ;
			b2 = 100*0.75 ;
			b3 = 100*1.20 ;
			b4 = c*1.50 ;
			b = b1+b2+b3+b4 ;
		}
	else
		{
			printf("Invalid input");
		}
		
	sum = b + b*0.20 ;
	
	printf("Total electricity bill : %f",sum) ;
		
}
