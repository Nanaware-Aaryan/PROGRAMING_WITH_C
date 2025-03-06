/*
*@file:- Example_1_8.c
*@brife:- Area of a Circle with Error Checking (Here is a variation of the program given in Example_1_7.)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
*@date:- 06 March 2025 Thursday 
*/

/* program to calculate the area of a circle, with error cheking */
#include <stdio.h> 

#define PI 3.14159

float process(float radius);     /* function prototype */

main() 
{
	float radius, area;     /* variable declaration */
	printf("Radius = ? ");
	scanf("%f",&radius);
	if (radius < 0)
		area = 0;
	else 
	    area = process(radius);
	printf("Area = %f",area);
}

float process(float r)   /* function defination */
{
	float a;   /* local variable declaration */
	a = PI * r * r;
	return(a);
}