/*
Name: Charles Hackett
Date:13 January 2020
Project: performance lab 14

SWITCH STATEMENT
Write a program that will evaluate a simple math formula.
Input the formula with two integers separated by an arithmetic operator from one line.
Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
Use a switch statement to print the correct value using the operators as cases.
Set the default condition to an error.
Ensure any division provides a double answer with a precision of two decimal places.
NOTE: Scan the arithmetic operator as a char
*/


// Bring in the things
#include <stdio.h>
// Instantiate the main and declare the things
int main(void) 
{
    char oper; 
    double num1;
    double num2;
    printf("A simple math formula with 2 numbers and either a +, -, *, /, or \%.\n:"); // prompt the user
    scanf("%lf%c%lf", &num1, &oper, &num2); // get the input
    switch (oper) // set the switch on the operand
    {
        case '+': // If plus then add
            printf("The sum of %.2f and %.2f is: %.2f\n", num1, num2, num1 + num2);
            break;
        
        case '-': // If minus then subtract
            printf("The difference of %.2f and %.2f is: %.2f\n", num1, num2, num1 - num2);
            break;

        case '*': // Multiply the things
            printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, num1 * num2);
            break;
        
        case '/': // Divide the things
            printf("The quotient of %.2f and %.2f is: %.2f\n", num1, num2, num1 / num2);
            break;

        case '%': // Get the remainder of the things
            printf("The remainder of %.2f and %.2f is: %d rounded to the nearest whole number.\n", num1, num2, (int)num1 % (int)num2);
            break;

        default: // Set the default error thing
            printf("Heeeeeeerrrrreeeeeees Johhny!\n");
            break;
    }
    return 0; // return 0 
}