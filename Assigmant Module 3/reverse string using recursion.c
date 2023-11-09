#include<stdio.h>

int reversestring();

main()
{
	printf("Enter string : ");
	reversestring();
}

int reversestring()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		reversestring();
		printf("%c",c);
	}
		
	
}
	
	
	
	
	
	
