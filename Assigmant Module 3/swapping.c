#include<stdio.h>

main()

{
	int a,b;
	printf("Enter value of a : \n");
	scanf("%d",&a);
	printf("Enter value of b : \n");
	scanf("%d",&b);
	
	printf("Before swapping : a = %d, b = %d \n",a,b);
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	printf("After swapping : a = %d,b = %d \n",a,b);
}