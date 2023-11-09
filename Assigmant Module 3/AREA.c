#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	int radius;
	float pie = 3.14;
	float length, breadth, area, base, height;
	
	printf("(1) To find area of circle : \n");
	printf("(2) To find area of rectangle : \n");
	printf("(3) To find area of triangle : \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("enter radius of cricle :");
			scanf("%d",&radius);
			printf("radius of cricle is %d \n",radius);
			area = (pie * radius * radius);
			printf("The area of given cricle is %f",area);
			//return 0;			
			break;
			
		case 2:
			printf("enter the length and breadth : \n");
			scanf("%f %f",&length, &breadth);	
			area = length * breadth;
			printf(" area of rectangle : %f",area);
			break;
			
		case 3:
			printf("Enter base and height of triangle : \n");
			scanf("%f%f",&base, &height);
			area = (base * height)/2;
			printf("Area of triangle is : %f \n",area);
			break;
			
		default :
			printf("Invalid choice");
	}
}