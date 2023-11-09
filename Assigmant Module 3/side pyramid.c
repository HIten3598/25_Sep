#include<stdio.h>

main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int rows = 5;
	
	for(i = 0;i < rows; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
		
		for(k = 0; k <= rows - i;k--)
		{
			printf("*");
		}
		printf("\n");
		
		
		
	}
	
	
	
	
	
	
	
	
}