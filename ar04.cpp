#include<stdio.h>

main()
{
	
	int n,i,count=0,sum=0 ;
	float avg ;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("\n================================");
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("\n1. Array : Enter %d. Element : ",i+1);
		scanf("%d",&a[i]);
		
	}
	
	printf("\n================================");
	
	for(i=0;i<n;i++)
	{
		
		printf("\n2. Array : Enter %d. Element : ",i+1);
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	
	printf("\n================================");
	
	printf("\n The sum of the array is : {");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",c[i]);
	}
	
	printf("}");

}
