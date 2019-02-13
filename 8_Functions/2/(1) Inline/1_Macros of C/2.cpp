//Program to find square of a number
#include<stdio.h>
#include<conio.h>

// Function like macro
#define square(x) x*x

//int square(int);

void main()
{
	int n,result;

	printf("Enter a no. of which you want to find square= ");
	scanf("%d",&n);

	result= square(n);
	printf("\n\nSquare of %d = %d",n,result);

	getch();
}

/* Using function */
//int square(int n)
//{
//	return n*n;
//}
