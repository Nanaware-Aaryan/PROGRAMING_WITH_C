/*
*@file:- Example_1_13.c
*@brife:- Areas of Unspecified Number of Circles (Here is more sophisticated approach to the problem describe in the previous example.)
*@author:- Aaryan Somnath Nanaware (asnanawaree@gmail.com)
*@date:- 06 March 2025 Thursday
*/

/* program to calculate the areas of circles, using a while loop; 
the results are stored in an array of structures; 
the number of circles is unspecified; 
a string is entered to identify each data set */ 


#include <stdio.h>

#define PI 3.14159 

// Function prototype
float process(float radius);

int main() {
    int n, i = 0;

    // Structure definition
    struct {
        char text[20];
        float radius;
        float area;
    } circle[10];  // Assuming max 10 entries; adjust as needed

    printf("To STOP, enter END for the identifier\n");

    while (1) {
        printf("\nIdentifier: ");
        scanf("%s", circle[i].text);

        // Check if input is "END" to stop the loop
        if (circle[i].text[0] == 'E' && 
            circle[i].text[1] == 'N' && 
            circle[i].text[2] == 'D' && 
            circle[i].text[3] == '\0') {
            break;
        }

        printf("Radius: ");
        scanf("%f", &circle[i].radius);

        // Compute area
        if (circle[i].radius < 0)
            circle[i].area = 0;
        else
            circle[i].area = process(circle[i].radius);

        ++i;
    }

    n = i - 1;  // Get the last valid index

    // Display results
    printf("\n\nSummary of Results\n\n");
    for (i = 0; i <= n; ++i) {
        printf("Identifier: %s\n", circle[i].text);
        printf("Radius = %f\n", circle[i].radius);
        printf("Area = %f\n\n", circle[i].area);
    }

    return 0;
}

// Function to calculate area
float process(float r) {
    return PI * r * r;
}
