#include<stdio.h>

main()

{
	
	int r,c,i,j;
	
	printf("Enter the number of rows for an array : "); scanf("%d",&r);
	printf("Enter the number of columns for an array : "); scanf("%d",&c);
	printf("\n=============================================================\n");
	
	int a[r][c],b[r][c],d[r][c] ;
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
		
	printf("\n=============================================================\n");
	
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element b[%d][%d] : ",i,j); scanf("%d",&b[i][j]);
			d[i][j]=a[i][j]+b[i][j];
		}	
	}
		
	printf("\n=============================================================\n");
	printf("Addition of the array is : \n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");	
	}	
	
	printf("\n=============================================================\n");

}
