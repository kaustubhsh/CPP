/**
 * Eg.:- Arithmetic exception when divide by zero
 * which terminates the program in C
 */ 
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	while(1)
	{	
		printf("Enter numerator= ");
		scanf("%d",&a);
		
		printf("Enter denominator= ");
		scanf("%d",&b);
		
		c=a/b;
		printf("Division= %d\n----------------\n\n",c);
	}
	
	getch();
}
