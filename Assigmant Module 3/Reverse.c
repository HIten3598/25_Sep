#include<stdio.h>

main()
{
	int number, reversedNumber = 0;
	
	printf("Enter The Number : \n");
	scanf("%d",&number);
	
	while(number != 0)
	{
		int remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	
	printf("Reverse = %d \n ",reversedNumber);
}