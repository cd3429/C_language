#include<stdio.h>

main()

{
	
	int r,c,i,j,sumd=0;
	
	printf("Enter the number of rows for an array : "); scanf("%d",&r);
	printf("Enter the number of columns for an array : "); scanf("%d",&c);
	printf("\n=============================================================\n");
	
	int a[r][c],sum[r];
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
			sumd=sumd+a[i][j];
		}	
		sum[i]=sumd;
		sumd=0;
	}
		
	printf("\n=============================================================\n");
	printf("The array in Matrix form : \n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n=============================================================\n");
	printf("Row-wise sum of the array is : \n");	
	
    for(i=0;i<r;i++)
	{
			printf("%d ",sum[i]);
			printf("\n");	
	}	
	
	printf("\n=============================================================\n");

}
