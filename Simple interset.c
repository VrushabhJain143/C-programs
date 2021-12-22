// program to print simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
	float interest, p,r,n;
	printf("Enter the value of p");
	scanf("%f",&p);
	printf("Enter the value of r");
	scanf("%f",&r);
	printf("Enter the value of n");
	scanf("%f",&n);
	interest=p*r*n;
	printf("the Simple Interest is%f",interest);
	getch();
}