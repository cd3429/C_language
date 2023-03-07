
/*

    1
   12
  123
 1234
12345

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
		d=1 ;
		for(j=1;j<=i;j++)
		{
			printf("%d",d);
			d++;
		}
		printf("\n");
		
	}
	
}
