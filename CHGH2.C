#include<stdio.h>
#include<conio.h>
main()
{

	int a,b,c ;
	clrscr();

	printf("Enter the value for a : ");
	scanf("%d",&a);

	printf("Enter the value for b : ");
	scanf("%d",&b);

	c = a ;
	a = b ;
	b = c ;

	printf("\nThe values are swapped!");
	printf("\n\nThe new value for a is : %d",a);
	printf("\nThe new value for b is : %d",b);

	getch();

}