// Bring in the things
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
// Instantiate the main
int main(void) 
{
    // Declare variables
    double num1, num2, num3;
    printf("\n\nEnter 2 sides of a triangle to get the 3rd side.\n:"); // Prompt the user
    scanf("%lf %lf", &num1, &num2); // Get the input with 2 numbers 
    if (num1 > 0 && num2 > 0) // If the 2 sides are possible
    {
        num3 = ((num1*num1) + (num2*num2)); // Declare and set num3
        num3 = sqrt(num3); // num3 is the  sqrt of the things
        printf("\nThe hypotenuse of a triangle with a side of %.2lf and %.2lf is %.2lf.\n\n", num1, num2, num3); // output the data
    }
    else // if the sides are bad
    {
        printf("\nThat triangle was not valid. Try again. \n"); // Scold the user
    }
    
    return 0;
}

