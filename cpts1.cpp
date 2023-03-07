
/*

     5
    54
   543
  5432
 54321

*/

#include<stdio.h>

main()

{
	
	int i,j,n,s,d,space,d0 ;
	
	printf("Enter the number of raw : ");
	scanf("%d",&n);
	d0='A';
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
