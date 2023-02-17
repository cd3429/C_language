#include<stdio.h>
#include<conio.h>
main()
{

	int c;
	float f ;

	clrscr();

	printf("To convert the temperature from degree Celsius to Fahrenheit : ");
	printf("\n\nEnter the temperature in degree Celsius : ");
	scanf("%d",&c);

	f = (c*1.8) + 32 ;

	printf("\nThe temperature in Fahrenheit is : %f",f);

	getch();

}