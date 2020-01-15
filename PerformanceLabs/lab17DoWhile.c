/*
Charles Hackett
13 Jan 2020
PERFORMANCE LAB 17
DO-WHILE LOOP
Initialize a 26 element int array to 0.
Initialize a char variable to 0.
Use a DO-WHILE loop to input, but not store, a string one character at a time from stdin without scanf()!!
Each time a character is entered:
convert the character to upper case using toupper()
increment the corresponding array element if the user input is a letter
Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
End the loop when a newline is read.
Print the results using a for loop ()
*/

#include <stdio.h>
#include <ctype.h>
​

int main(void)
{
    // Initialize variables
    int nums[26] = {0};
    char myChar = 0;
    do
    {
        // Get the input
        myChar = getchar();
        // Make uppercase
        myChar = toupper(myChar);
        // Check if it is a workable character and increment
       // if (myChar - 65 >= 0 && myChar - 65 < 26)
        //{
            nums[myChar-65]++;
        //}
        // Break out of the loop on newline
    } while (myChar != '\n');
​
    for (int i = 0; i < 26; i++)
    {
        // Print the count of each character
        printf("%d\n", nums[i]);
    }
    
    return 0;
}