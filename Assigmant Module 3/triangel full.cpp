#include<stdio.h>

main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int rows = 5;
    int space = (2 * rows - 1) / 2;
    
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }
    space = 0;
    
    for (i = rows-1; i >= 1; i--)
    {
        for(j = 0; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
        	printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}
