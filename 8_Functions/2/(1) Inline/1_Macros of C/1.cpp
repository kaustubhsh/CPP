//Program to find area of circle
#include<stdio.h>
#include<conio.h>

//Symbolic constant
#define PI 3.14

void main()
{
	float r, area;

	printf("Enter radius of circle= ");
	scanf("%f",&r);

	area = PI * r * r;
	/* After Macro substitution/expansion during preprocessing
	   area = 3.14 * r * r;
	*/

	printf("\n\nArea of circle having %.3f cm radius = %.3f sq. cm\n\n",r,area);

	getch();
}
