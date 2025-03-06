/*
*@file:- Example_1_10.c
*@brife:- Areas of an Unspecified Number of Circles (
  The previous program can be improved by processing 
an unspecified number of circles, where the calculations continue until a value of zero is entered for the radius. This 
avoids the need to count, and then specify, the number of circles in advance. This feature is especially helpful when there 
are many sets of data to be processed.  
)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
*@date:- 06 March 2025 Thursday
*/

/* program to calculate the areas of circle . using s for loop;
   the number of circle is unspecified */

#include <stdio.h>

#define PI 3.14159 

float process(float radius);   /* function prototype */

main() 
{
	/* variable declaration */
	float radius, area;   
	int count;

	printf(" To STOP , enter 0 for the radius\n");
	printf(" \nRadius = ? ");
	scanf("%f",&radius);

	for (count = 1; radius != 0; ++count) {
		if (radius < 0)
			area = 0;
		else
			area = process(radius);
		printf("Area = %f\n",area);
		printf("\nRadius = ? ");
		scanf("%f",&radius);
	}
}

float process(float r)    /* function defination */
{
	float a;     /* local variable declaration */

	a = PI * r * r;
	return(a);
}