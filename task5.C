#include<stdio.h>
#include<conio.h>
main()
{

	float P,R,T ;

	clrscr();

	printf("To find the Interest : \n\n");
	printf("Enter the amount invested : ");
	scanf("%d",&P) ;
	printf("Enter the rate of interest %% : ");
	scanf("%d",&R) ;
	printf("Enter the time duration (in years) : ");
	scanf("%d",&T) ;
	printf("\nYour simple interest is : %d " , P*R*T/100 ) ;
	getch();





}