
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
	d0=n;
	
	for(i=n;i>=1;i--)
	{
		space=n-i;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		d=d0 ;
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d--;
		}
		d0--;
		printf("\n");
	}
	
}
