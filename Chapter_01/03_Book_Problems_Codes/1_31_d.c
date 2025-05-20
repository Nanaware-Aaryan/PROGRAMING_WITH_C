/*
*@file:- 1_31_d.c
*@brife:- See File 1_31.txt
*@auther:- Aaryan Somnath Nanaware ("I'm Student Of MARSHALLING VOID")
*@date:- 21 May 2025 Wednesday
*/

// Hedear File for Input / Output 

#include <stdio.h>

// Entery Point Functin

main() 
{
    float gross , tax , net ; // This is variable diclaration (with floting data types)
    printf(" Gross Salary ");
    scanf("%f" , &gross ); // gerting value for fross
    tax = 0.14 * gross ; // calculating value of tax
    net  = gross - tax ; // calculating value of net 
    printf("Taxes withheld : %.2f\n" , tax);
    printf("Net Salary : %.2f\n" , net);

}