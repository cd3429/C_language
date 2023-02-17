#include<stdio.h>
#include<conio.h>
main()
{

	int salary;
	float HRA,DA,TA,gsalary ;

	clrscr();

	printf("Enter the base salary : ");
	scanf("%d",&salary);

	HRA = salary*0.1;
	DA = salary*0.05;
	TA = salary*0.08;
	gsalary = salary + HRA + DA + TA ;

	printf("\nHRA : %f",HRA);
	printf("\nDA : %f",DA);
	printf("\nTA : %f",TA);

	printf("\n\nThe net salary is : %f",gsalary);

	getch();

}