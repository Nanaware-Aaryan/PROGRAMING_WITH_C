/*
*@file:- Example_11.c
*@brife:- Areas of Unspecified Number of Circles (Here is a variation of the program shown in the previous example)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
*@date:- 06 March 2025 Thursday
*/

/* program to calculate the areas of circle , using a while loop;
   number of circles is unspecified */

#include <stdio.h>

#define PI 3.14159

float process(float radius);     /* function declaration */

main()  
{
	float radius, area;  /* variable declaration */
	printf(" To STOP , enetr 0 for the radius\n");
	printf("\nRadius = ? ");
	scanf("%f", &radius);

	while (radius != 0) {
		if (radius < 0) 
			area = 0;
		else
			area = process(radius);
		printf("\nRadius = ? ");
		scanf("%f", &radius);
	}
} 

float process(float r)      /* function defination */
{
	float a;        /* local variable declartion */
	a = PI * r * r;
	return(a);
}