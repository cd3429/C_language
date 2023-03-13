#include<stdio.h>

main()

{
	
	int n,i,j,sumd=0;
	
	printf("Enter the size of 2D array : "); scanf("%d",&n);
	printf("\n=============================================================\n");
	
	int a[n][n];
	
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			sumd=sumd+a[i][j];
			}	
		}	
	}
		
	printf("\n=============================================================\n");
	printf("The array in Matrix form : \n");
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n=============================================================\n");
	printf("Diagonal sum of the array is : %d",sumd);	
	
	
	printf("\n=============================================================\n");

}
