#include<stdio.h>

main()
{
	int n,sum = 0,FD,LD,digit;
	printf("Enter any number to find sum of FD and LD = \n");
	scanf("%d",&n);LD = n % 10;
	digit = (int)log10(n);
	FD = (int)(n/pow(10,digit));
	sum = FD + LD;
	printf("sum of FD and LD = %d",sum);
}