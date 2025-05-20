/*
*@file:- 1_31_f.c
*@brife:- See File 1_31.txt
*@auther:- Aaryan Somnath Nanaware ("I'm Student Of MARSHALLING VOID")
*@date:- 21 May 2025 Wednesday
*/

// Header File for Input / Output

#include <stdio.h>

// Function Prototype

int smaller(int a , int b);

// Entery Point Function

main()
{
    int count , n , a , b , min  ;

    printf(" How Many pairs of number ");
    scanf("%d", &n); 

    for (count = 1 ;count <= n ; count++) 
    {
        printf("Plase enter the first number ");
        scanf("%d" , &a); 

        printf("Plase enter the second number ");
        scanf("%d" , &b);

        min = smaller(a , b);
        printf("\nThe Smaller Number is: %d\n" , min);
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