#include<stdio.h>

main()
{
	
	int n,rem,div,rev,sum=0,n1,n2,n3,mynum,n1o;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	mynum = n ;
	
	while(n>0)
	{
		rem = n%10 ;
		div = n/10 ;
		n = div ;
		sum=sum+rem;
	}
	
	n1 = sum ;
	n1o = n1 ;
		while(n1>0)
	{
		rem = n1%10 ;
		div = n1/10 ;
		rev=rev*10 + rem ;
		n1 = div ;
	}
	
	n2 = rev ;
	n3 = n1o*n2 ;
	
	printf("\n%d * %d = %d",n1o,n2,n1o*n2);
	if(mynum==n3)
	{
		printf("\nThe number is magic");
	}
	else
	{
		printf("\nThe number is not magic");
    }
}
