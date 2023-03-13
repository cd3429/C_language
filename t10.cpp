#include<stdio.h>

main()

{
	
	int r,c,i,j,sum=0;
	
	printf("Enter the size(row) of 2D array : "); scanf("%d",&r);
	printf("Enter the size(column) of 2D array : "); scanf("%d",&c);
	
	printf("\n=============================================================\n");
	
	int a[r][c];
		
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			{
			sum=sum+a[i][j];
			}	
		}	
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
	printf("Sum of the boundary elements of the array is : %d",sum);	
	
	
	printf("\n=============================================================\n");

}
