#include<stdio.h>

main()

{
	
	int n,i,j,sumd1=0,sumd2=0;
	
	printf("Enter the size of 2D array : "); scanf("%d",&n);
	printf("\n=============================================================\n");
	
	int a[n][n],d[n][n];
	
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	
	//flip the rows 
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][n-1-j];
		}	
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			sumd1=sumd1+a[i][j];
			sumd2=sumd2+d[i][j];
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
	printf("Flipped Matrix : \n");
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n=============================================================\n");
	printf("cross diagonal sum of the array is : %d",sumd1+sumd2);	
	
	
	printf("\n=============================================================\n");

}
