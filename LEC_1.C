//program to swap two variables by using third variable

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,temp ;
	clrscr();

	printf("========================================================\n");
	printf("Program to swap two variables by using a temporary variable\n");
	printf("========================================================\n\n");

	printf("Enter a value for the first variable a : ");
	scanf("%d",&a);

	printf("Enter a value for the second variable b : ");
	scanf("%d",&b);

	temp = a ;
	a = b ;
	b = temp ;

	printf("\nVariables are swaped!\n\n");

	printf("New value of a is %d.\n",a);
	printf("New value of b is %d.\n",b);



	getch();

}