/*
*@file:- Example_1_9.c
*@brife:- Areas of Several Circles (The following progrm expads the previous sample program by calculating the areas circle)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
@date:- 06 March 2025 Thursday  
*/

/* program to calculate the areas of circles , using for loop */
#include <stdio.h>

#define PI 3.14159

float process(float radius);    /* fucntion prototype */

main() 
{
	float radius, area;  /* variable declaration */
	int count, n;       /* variable declaration */

	printf(" How many circles? ");
	scanf(" %d",&n);

	for (count = 1; count <= n ; ++count) {
		printf("\nCircle no. %d: Radius = ? ",count);
		scanf(" %f ",&radius);
		if (radius < 0) 
			area = 0;
		else
			area = process(radius);
		printf(" Area =%f\n", area);
	}
}

float process(float r)     /* function definaion */
{
	float a;      /* local variable declaration */
	a = PI * r * r;
	return(a);
}