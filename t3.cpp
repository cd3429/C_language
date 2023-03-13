#include<stdio.h>

main()

{
	
	int r,c,i,j,count=0 ;
	float sum=0,avg;
	
	printf("Enter the number of rows for an array : "); scanf("%d",&r);
	printf("Enter the number of columns for an array : "); scanf("%d",&c);
	printf("\n=============================================================\n");
	
	int a[r][c] ;
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
			count++; sum=sum+a[i][j];
		}	
	}
		
	printf("\n=============================================================\n");
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}	
	
	printf("\n=============================================================\n");
	
	printf("The average of the array is : %f",sum/count);

}
