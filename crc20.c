#include<stdio.h>

main()
{
	
	int i,j,s,s1=3,s2=-1;
	
	for(i=1;i<=4;i++)
	{
	
	for(s=1;s<=s1;s++)
	{
		printf(" ");
	}
	
	s1--;
	
	printf("*");
	
	for(s=1;s<=s2;s++)
	{
		printf(" ");
	}
	
	s2+=2;
	
	if(i>=2)
	{
		printf("*");
	}
	
	printf("\n");
	
    }
    
}
