/*
Charles Hackett
13 Jan 2020
Performance Lab 16: While Loop
PERFORMANCE LAB 16
WHILE LOOP
Initialize a NUL terminated char array with multiple phrases separated by newlines (\n).
Test the char array with puts().
Write a WHILE loop that only prints the first line AND stops at a NUL character
NOTE: Stopping at the null character is a safety measure that accounts for arrays lacking a new line
*/

// Bring in the things
#include <stdio.h>
// Instantiate the main
int main(void) 
{   
    // Declare and set the things.
    char thing[] = {"Here is a thing. \nAnd another. \nAnd, yet, another. \n\0"};
    int i = 0;
    char thingy = "a";
    // Print the thing to test as per the prompt
    puts(thing);
    // While thingy is not a new line or a Null character 
    while (thingy != '\n' && thingy != 0)
    {   
        // set thingy to be thing[i]
        thingy = thing[i];
        // print thingy
        printf("%c", thingy);
        // increment i
        i++;
    }
    

    return 0;
}