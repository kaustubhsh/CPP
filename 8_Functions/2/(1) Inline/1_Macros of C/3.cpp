//Program to find sum of two numbers
#include<stdio.h>
#include<conio.h>

// Function like macro
#define sum(x,y) x+y

void main()
{
	int a,b,result;

	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);

	result= sum(a,b)/2;

	printf("\nSum= %d",result);

	getch();
}
