
/*

    1
   21
  321
 4321
54321

*/

#include<stdio.h>

main()

{
	
	int i,j,n,s,d,space ;
	
	printf("Enter the number of raw : ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		space=n-i;
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		d=i ;
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d--;
		}
		printf("\n");
		
	}
	
}
