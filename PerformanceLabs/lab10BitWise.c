/*
Charles Hackett
10 Jan 2020
Lab 10: Bitwise Shift Right
Input a uint32_t userInput from stdin utilizing fscanf()
Initialize another uint32_t bitChecker to 0x01
Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
Print the binary representation of userInput to stdout using only the following:
fprintf()
Bitwise Shift Right >>
Bitwise AND &
Relational Operator (e.g., >)
*/
// Bring in the things
#include <stdio.h>
#include <stdint.h>
// Instantiate the bin converter
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
}

// Instantiate the main
int main(void) 
{
    uint32_t num1; // declare num 1 as an unsigned 32 bit integer
    printf("\nEnter a number to be converted:"); // Prompt the user
    fscanf(stdin, "%d", &num1); // use fscanf to read the user input
    bin(num1); // send num1 to the function
    printf("\n");
    return 0;
}
