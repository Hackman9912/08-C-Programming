/*
Name: Charles Hackett
Date: 8 January 2020
Project: Lab 5: Basic I/O Pt 1

............  Objective  ...........

Lab 5: Basic I/O Pt 1
Input a single character and then print the next sequential character
Use getchar() and putchar()
Test it with the following input:
- 7
- H
- 1337
- abc
- Ctrl-D
- \
- -1
- <Space>
- ~
- 1234567890
HINT:
putchar(yourVar + 1);

*/

// Bring in the library
#include <stdio.h>

// Instantiate main
int main(void)
{
    int userInput = 0; // will hold user input
    printf("Enter a character: "); // Prompt user
    userInput = getchar(); // Stores user input
    printf("\nSYour character was: "); // Preface the output
    putchar(userInput); // Prints the output
    printf("\n\n");
    printf("The next character is: "); // Preface the second output
    putchar(userInput + 1); // Print the output with the next thing
    printf("\n\n");
    return 0;
}