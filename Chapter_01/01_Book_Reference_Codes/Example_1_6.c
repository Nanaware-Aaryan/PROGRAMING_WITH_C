/*
*@file:- Example_1.6.c 
@brife:- Area of a Circle (Here is an elementry C program taht reads in the radius of circle , calculate its area and then writes the calculated result.)
@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
@date:- 06 March 2025 Thursday 
*/


/* progarm to calculate the area of a circle */

#include <stdio.h>           /* LIBRARY FILE ACCESS */
main() 
{
    float radius, area;          /* VARIABLE DECLARATION */
    
    printf(" Radius = ? ");      /* OUTPUT STATEMENT (PROMPT) */    
    scanf("%f",&radius);         /* INPUT STATEMENT */
    area = 3.14159 * radius * radius ;  /* ASSIGNMENT STATEMENT */
    printf("Area = %f",area);    /* OUTPUT STATEMENT */
}
