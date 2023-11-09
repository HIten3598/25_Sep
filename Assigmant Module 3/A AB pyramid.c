#include<stdio.h>

main()
{
	int i = 0;
	int j = 0;
	int rows = 5;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0;j <= i; j++)
		{
			printf("%c", 'A' + j);
		}
		printf(" \n");
	}
}