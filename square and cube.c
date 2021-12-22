//program to accept a number from user and to printits square and cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, square, cube;
	printf("Enter a number N");
	scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("%d,%d", square,cube);
getch();
}