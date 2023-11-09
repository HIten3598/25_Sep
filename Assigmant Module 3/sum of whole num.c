#include<stdio.h>

main()
{
	int num, sum = 0;
	
	num = 1346;
	printf("the number is : %d \n",num);
	
	while(num != 0)
	{
		sum += num % 10;
		num = num / 10;
	}
	printf("Sum: %d\n",sum);
}