/*
*@file:- Example_12.c
*@brife:- Calculating and Sorting the Areas of Several Circles (
Some problems require that a series of 
calculated results be stored within the computer, perhaps for recall in a later calculation. The corresponding input data 
may also be stored internally, along with the calculated results. This can be accomplished through the use of arrays. 
The following program utilizes two arrays, called radius and area, to store the radius and the area for as many as 
100 different circles. Each array can be thought of as a list of numbers. The individual numbers within each list are 
referred to as array elements. The array elements are numbered, beginning with 0. Thus, the radius of the first circle will 
be stored within the array element radius[01, the radius of the second circle will be stored within radius[ 11, and so 
on. Similarly, the corresponding areas will be stored in area[01, area[ 11, etc
)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
*@date:- 06 March 2025 Thursday
*/

/* program to calculate the areas of circles, using a while loop;
   the result are stored in an array; the number of circles is unspecified */

#include <stdio.h>

#define PI 3.14159 

float process(float radius);     /* function prototype */

main() 
{
	int n, i = 0;      /* variable declaration */
	float radius[100], area[100];   /* array declaration */
	printf("To STOP, enter 0 for the radius\n\n");
	printf("Radius = ?");
	scanf("%f",&radius[i]);

	while(radius[i]) {
		if (radius[i]) 
			area[i] = 0;
		else
			area[i] = process(radius[i]);
		printf("Radius = ?");
		scanf("%f",&radius[++i]);
	}

	n = --i;    /* tag the highest value of i */
	/* display the array elements */
	printf("\nSummary of Results\n\n");
	for (i = 0; i <= n; ++i)
		printf("Radius = %f Area = %f\n",radius[i], area[i]);
}

float process(float r)  /* funcction defination */
{
	float a;     /* local variable declaration */
	a = PI * r * r;
	return(a);
}
