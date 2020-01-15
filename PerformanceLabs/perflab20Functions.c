/*
Name: Charles Hackett
Date:14 January 2020
Project: performance lab 20

Function - "Healthy Substitutions"
int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
Return Value - number of characters replaced
Parameters
Pointer to a null-terminated string
Character to find
Character to replace it with
Purpose - replace all occurrences of findThisChar with replaceItWithThis
Use pre-defined return values as indicated in shell code
*/

// bring in the things
#include <stdio.h>

// Function prototype
int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
int killa(void);
// instantiate main
int main()
{
    // declare and set the things     
    char phrase[256] = {0};
    char find;
    char repl;
    printf("Enter a phrase to be doing the things with: "); // prompt the user for the phrase
    scanf("%[^\n]", &phrase); // take input until you get a new line
    killa(); // run killa to clear stdin
    printf("\nEnter a character to be replaced: \n"); // prompt user
    scanf("%c", &find); // get input for find
    killa();
    printf("\nEnter what to replace it with: \n"); // prompt user
    scanf("%c", &repl); // get input for repl
    printf("You entered:%c to replace %c in %s\n", repl, find, phrase); // tell the user what they entered
    replace_character(phrase, find, repl); // replace the characters
    killa();
    printf("Your new phrase is %s\n", phrase); // print the new stuff
    return 0;
}

// Instantiate our function to print odds or evens
int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
    for (; *string; string ++) // for loop setting i to 0, and iterating through the string array until a new line
    {
        if (*string == findThisChar) // if the character matches what we want
        {
            *string = replaceItWithThis; // replace it
        }
    }
}

int killa(void)
{
    // declare c
    int c;

    while ( (c = getchar()) != '\n' && c != EOF ) // While loop that sets c to getchar() and while c isnot a new line increment c until the end of stream
        {
        // THIS IS LEFT BLANK
        }
    return 0;
}