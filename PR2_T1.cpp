#include<stdio.h>

main()
{
	
	char a ;
	printf("Enter an input : ");
	scanf("%c",&a);
	
	if(a>='A'&&a<='Z')
	{
		printf("Capital Alphabet");
	}
	else if(a>='a'&&a<='z')
	{
		printf("Small Alphabet");
	}
	else if(a>='0'&&a<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("Special Character");
	}
	
}
