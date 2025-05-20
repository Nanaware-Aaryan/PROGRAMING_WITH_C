/*
*@file:- 1_31_e.c
*@brife:- See File 1_31.txt
*@auther:- Aaryan Somnath Nanaware ("I'm Student Of MARSHALLING VOID")
*@date:- 21 May 2025 Wednesday
*/

// Header File For Input / Output

#include <stdio.h>

// function prototype
int smaller(int a , int b) ;

// Entery Point Function

main()
{
    int a,b,min; // Decalring variablesv (With Data type int)

    printf(" Plase enter the first number ");
    scanf("%d",&a);  // getting vlue for a 
    printf(" Plase enter the Second number ");
    scanf("%d",&b); // getting value for b
    min = smaller(a,b);
    printf("\nThe smaller number is: %d", min);
}

// Function Defination
/*
*Identifier :- smaller
*Type :- int (int  , int  )
*/

int smaller (int a , int b) 
{
    if (a <= b )
    {
        return(a);
    }

    else 
    {
        return(b);
    }
}