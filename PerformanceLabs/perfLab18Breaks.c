/*
Name: Charles Hackett
Date:14 January 2020
Project: performance lab 18

CONTINUE
Input an unsigned integer "x".
Print the first 10 to 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
Repeat this process.
Immediately stop this process when the user inputs an integer above 999.
Ignore any "divide by 0" errors using continue.
*/

// bring in the things
#include <stdio.h>
// instantiate main
int main()
{
    // declare and set the things
    unsigned int x = 0;      
    unsigned int y = 1;      
    unsigned int i = 1;
    printf("Enter a number between 1-999: "); // prompt the user
    scanf("%d", &x); // get input
    while (1) // obligatory while true
    {
        if (x > 999) // if user puts a number in greater than 999 prompt them and exit
        {
            printf("999 is the limit, not the sky.\n");
            return 0;
        }
        else if (x < 1) // if user puts in a number less than 1 prompt them, set x to 1500 and continue to loop again
        {
            printf("1 is the ground level, this isn't Asia.\n");
            x = 1500;
            continue;
        }
        break; // break to continue
    }
    while (i < 20 && y < 999) // while our parameters are set
    {
        if (x % y == 0) // if x / y has no rem then print them out and increment i
        {
            printf("%d: %d\n", i, y);
            i ++;
        }
    y ++; // increment y
    }
    return 0;
}