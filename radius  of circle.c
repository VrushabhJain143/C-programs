//program to accept value of radius of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	float area, radius;
	printf("enter the value");
	scanf(" %f",&radius);
	area=3.14*radius*radius;
	printf("The radiius of circle is %f", area);
}