/* 
*@file:- 1_31_h.c
*@brife:- See File 1_31.txt
*@auther:- Aaryan Somnath Nanaware ("I'm Student Of MARSHALLING VOID")
*@date:- 21 May 2025 Wednesday
*/


// Header file for Input / Output 

#include <stdio.h>

// Function Prototype

int smaller(int  , int );

// Entery Point FUnction

main()
{
    int n , i = 0;
    int a[100] , b[100] , min[100] ;

    printf("To Stop , Enter 0\n");

    printf("\nPlase Enter the first number ");
    scanf("%d" , &a[i]);

    printf("Plase Enter the second number ");
    scanf("%d" , &b[i]);
 
    
    while (a[i] || b[i]) 
    {
        min[i] = smaller(a[i] , b[i]) ;
        printf("\nPlase Enter the first number ");
        scanf("%d" , &a[++i]);

        printf("Plase Enter the first numer ");
        scanf("%d" , &b[i]);
    }
    n = --i;
    printf("\nSummery of result ");
    for (i = 0 ;  i <= n ; ++i) 
    {
        printf("a = %d  b = %d  min = %d\n" , a[i] , b[i] , min[i]);
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
