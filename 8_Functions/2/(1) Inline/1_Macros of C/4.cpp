//Program to find maximum of two numbers
#include<stdio.h>
#include<conio.h>

// Function like macro
#define max(x,y) (x>y?x:y)

void main()
{
	int a,b,result;
	
	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);
	
	result= max(a,b);
	
	printf("\nMax= %d",result);
	
	getch();
}
