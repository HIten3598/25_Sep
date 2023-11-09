#include<stdio.h>

main()

{
	int i = 0;
	int j = 0;
	int k = 0;
	int rows = 5;
	
	for( i = 0; i <= 5; i++)
	{
		for(j = 0; j < 2 * (rows - i) -1; j++)
		{
			printf(" ");
		}
		for( k = 0;k < 2 * i + 1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}