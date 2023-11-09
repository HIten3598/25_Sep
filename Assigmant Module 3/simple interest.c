#include<stdio.h>

main()
{
	float Principle,Rate,Time,SI;
	printf("Enter value of Principle : \n");
	scanf("%f",&Principle);
	printf("Enter value of Time : \n");
	scanf("%f",&Time);
	printf("Enter value of Rate : \n");
	scanf("%f",&Rate);
	SI = (Principle * Rate * Time) / 100;
	printf("SI is : %f \n",SI);
}