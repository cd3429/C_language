#include<stdio.h>

main()
{
	
	int n,i,count=0 ;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("\nEnter %d. Element : ",i+1);
		scanf("%d",&a[i]);
		
	}
	
	printf("\n The array is : {");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
		count++;
	}
	
	printf("}");
	
	printf("\n The number of element is : %d ", count);

}
