/*
Name: Charles Hackett
Date: 8 January 2020
Project: Lab 5: Basic I/O Pt 1

............  Objective  ...........

Lab 6: Basic I/O Pt 2
Input a single character and then print the previous sequential character
Use getc() and putc()
Test it with the following input:
- 7a
- H
- 1337
- abc
- Ctrl-D
- <Enter>
- \
- -1
- <Space>
- ~
- 1234567890
- <Tab>
HINT:
putc(yourVar - 1, stdout);

*/

// Bring in the library
#include <stdio.h>

// Instantiate main
int main(void)
{
    int userInput = 0;
    printf("Enter a character: ");
    userInput = getc(stdin);
    printf("Your character was: ");
    putc(userInput, stdout);
    printf("\n");
    printf("The character before yours is: ");
    putc(userInput - 1, stdout);
    printf("\n\n");
    return 0;
}