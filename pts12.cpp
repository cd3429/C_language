
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
	
	for(i=1;i<=n;i++)
	{
		space=n-i;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		d=d0 ;
		for(j=1;j<=i;j++)
		{
			printf("*");
			d++;
		}
		printf("\n");
	}
	
}
