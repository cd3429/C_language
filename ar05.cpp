#include<stdio.h>

main()
{
	
	int n,i,count=0,sum=0 ;
	float avg ;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("\n================================");
	int a[n],b[n],c[n+n];
	
	for(i=0;i<n;i++)
	{
		
		printf("\n1. Array : Enter %d. Element : ",i+1);
		scanf("%d",&a[i]);
		c[i]=a[i];
		
	}
	
	printf("\n================================");
	
	for(i=0;i<n;i++)
	{
		
		printf("\n2. Array : Enter %d. Element : ",i+1);
		scanf("%d",&b[i]);
		c[n+i]=b[i];
	}
	
	printf("\n================================");
	
	printf("\n The merged array is : {");
	
	for(i=0;i<2*n;i++)
	{
		printf(" %d ",c[i]);
	}
	
	printf("}");

}
