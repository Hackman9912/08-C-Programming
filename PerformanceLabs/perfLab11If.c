/*
Name: Charles Hackett
Date:13 January 2020
Project: performance lab 11

IF STATEMENT
Initialize a char array to zero.
Safely store a user-input string in the char array.
Safely print the string IF the following conditions are both true:
The first element greater than or equal to decimal value 32.
The first element is less than decimal value 126.
NOTE: decimal values 32-126 represent printable ASCII characters
*/


// Bring in the things
#include <stdio.h>
// Instantiate the main
int main(void) 
{
    char arr1 [32] = {0}; // declare and set the array
    printf("Enter some input.\n:"); // prompt the user
    fgets(arr1, sizeof(arr1), stdin); // get the input
    if (arr1 [0] >= 32 && arr1 [0] < 127) // if the first thing is within the range
    {
       printf("You entered %s\n", arr1); // tell the user what they entered
    }
    else // if not then tell them they suck
    {
        printf("Try something else.\n");
    }
    
    return 0; // return 0 
}