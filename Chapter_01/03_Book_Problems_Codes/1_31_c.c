/*
*@file:- 1_31_c.c
*@brife:- See 1_31.txt
*@auther:- Aaryan Somnath Nanaware (asnanaware@gmail.com)
*@date:- 20 May  2025 Tuesday
*/

// Header File for Input/Output

#include <stdio.h> 

// Entery Point Function 

main() 
{
	float base , height , area ; // Decalring Variables With Data type Float for Storing Values

	printf(" Base ");
	scanf("%f" , &base); // getting value for base
	printf(" Height ");
	scanf("%f" , &height); // getting value for height 
	area = (base * height) / 2. ;  // calculating value of area
	printf("Area : %f" , area);
}
