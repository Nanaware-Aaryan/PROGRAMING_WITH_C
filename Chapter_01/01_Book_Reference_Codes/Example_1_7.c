/*
*@file:-Example_1_7.c
*@brfe:- Area of Circle (Here is a variation of the program in Example_1_6 for calculating the are of a circle)
@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
@date:- 06 March 2025 Thursday 
*/


/* program to calculate the are of a circle */

#include <stdio.h>

#define PI 3.14159  

float process(float radius);  /* function prototype */

main() 
{
	float radius, area;  /* variable declaration */
	printf("Radius = ? ");
	scanf("%f", &radius);
	area = process(radius);
	printf("Area = %f", area);
}

float process(float r)     /* function defination */
{
	float a;     /* local vaariable declaration */
	a = PI * r * r;
	return(a);
}