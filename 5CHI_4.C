#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z ;
	clrscr();
	printf("To get the answer of (x-y)^3 :\n\n");

	printf("Enter the value for x : ");
	scanf("%d",&x);

	printf("Enter the value for y : ");
	scanf("%d",&y);

	z=(x-y)*(x-y)*(x-y) ;

	printf("\n(x-y)^3 = %d",z) ;

	getch();

}