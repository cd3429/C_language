#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,ans ;

	clrscr();
	printf("To get the answer of (x+y+z)^3 :\n\n");

	printf("Enter the value for x : ");
	scanf("%d",&x);

	printf("Enter the value for y : ");
	scanf("%d",&y);

	printf("Enter the value for z : ");
	scanf("%d",&z);

	ans=(x+y+z)*(x+y+z)*(x+y+z) ;

	printf("\n(x+y+z)^3 = %d",ans) ;

	getch();

}