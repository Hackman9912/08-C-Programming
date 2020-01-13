/*
Name: Charles Hackett
Date:13 January 2020
Project: performance lab 115

FOR LOOP: OCCUPANDI TEMPORIS
Following demo lab 1 for 7.3, you should have identified your past code/programs where a for loop would have been more economical. Well NOW is your chance. Create a C file where your previous code is commented out and directly underneath, you implement a for loop.

*/

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