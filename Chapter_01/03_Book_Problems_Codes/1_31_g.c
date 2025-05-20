/* 
*@file:- 1_31_g.c
*@brife:- See File 1_31.txt
*@auther:- Aaryan Somnath Nanaware ("I'm Student Of MARSHALLING VOID")
*@date:- 21 May 2025 Wednesday
*/

// Header File for Input / Output 

#include <stdio.h>

// Function Prototype 

int smaller(int a , int b);

// Entery point function

main() 
{
    int a , b , min ;
    printf("To Stop , Enter 0 for each number\n");
    
    printf("\nPlase Enter the first number ");
    scanf("%d", &a);

    printf("Plase Enter the second number ");
    scanf("%d" , &b);

    while (a  != 0 || b != 0)
    {
        min = smaller(a , b);
        printf("\nThe smaller number is: %d\n", min); 

    printf("\nPlase Enter the first number ");
    scanf("%d", &a);

    printf("Plase Enter the second number ");
    scanf("%d" , &b);
    }
}

// Function Defination 
/*
*Identifier :- smaller
*Type :- int (int , int )
*/

int smaller(int a , int b) 
{
    if (a <= b) {
      return(a);
    }
    else {
      return(b);
    }
}