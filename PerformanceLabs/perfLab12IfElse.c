/*
Name: Charles Hackett
Date:13 January 2020
Project: performance lab 12

IF-ELSE STATEMENT
Initialize a signed int to 0.
Input a number from the user and store it in the signed int.
Determine if the number is negative or positive utilizing a bitwise operator.
Utilizing an IF-ELSE statement:
INDICATE if the number is negative
Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
Print the binary
*/



// Bring in the things
#include <stdio.h>

int bin(n)
{
    unsigned bitChecker; // make an unsigned variable
    int counts = 0; // declare and set our counter
    for (bitChecker = 1 << 31; bitChecker > 0; bitChecker >>= 1) // iterate through bitchecker 
        {
            fprintf(stdout, "%s", (n & bitChecker)?"1":"0"); // print 1 or 0 based off the bitwise comparison of n and bitChecker
            counts ++; // increment the counter
            if (counts == 4) // if the counter hits 4 print a space and reset it to 0
            {
                printf(" ");
                counts = 0;
            }
        }
    printf("\n"); // make it pretty
}

// Instantiate the main
int main(void) 
{
    int num1 = 0; // declare and set the array
    printf("Enter some input.\n:"); // prompt the user
    scanf("%d", &num1); // get the input
    if (num1 == 0) // if the number was 0 then state that
    {
        printf("The number was 0.\n");
    }
    else if ((num1 & 0x80000000) != 0) // if the first bit is on then this will return 1 and enter the loop
    {
       bin(num1); // print the binary of the negative number
       printf("The number %d is negative. \n", num1); // print the number
    }
    else // if not then tell them they suck
    {
        printf("\nThe number was positive. Here is the binary..\n"); // Say the number was positive
        bin(num1); // Get the binary
        num1 = (num1 ^ -1) + 1; // use XOR to make it a negative
        printf("\nHere is the negative number: %d \nNow the binary:\n", num1); // print the new number 
        bin(num1); // print the binary
    }
    
    return 0; // return 0 
}