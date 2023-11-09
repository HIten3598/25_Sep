#include<stdio.h>

main()
{
	int i,num,fact = 1;
	printf("Enter a number : \n");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Error ! factorial of negative numver doesn't exist \n");
	}
	else
	{
		for(i = 1; i <= num; i++)
		{
			fact *= i;
		}
		printf("factorial of %d = %d",num,fact);
	}
	
	
}