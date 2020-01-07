/*
Name: Charles Hackett
Date: 7 January 2020
Project: performance lab 4, Strings

............  Objective  ...........

Lab 4: Strings
Declare and zeroize a char array with a dimension of 256
Assign your chosen phrase to the leading elements of that array
Explicitly verify your string is nul-terminated
Print your string
QUIZ: What is your string length?
EVIL: Replace/remove/comment all null ('\0') characters and print the string

*/

// Bring in the library
#include <stdio.h>

// Instantiate main
int main(void)
{
    // declare and set the phrase
    int stringyCount = 0;
    char myFavWord[256] = {0};
    myFavWord[0] = 'I';
    myFavWord[1] = '\'';
    myFavWord[2] = 'l';
    myFavWord[3] = 'l';
    myFavWord[4] = ' ';
    myFavWord[5] = 'b';
    myFavWord[6] = 'e';
    myFavWord[7] = ' ';
    myFavWord[8] = 'b';
    myFavWord[9] = 'a';
    myFavWord[10] = 'c';
    myFavWord[11] = 'k';
    myFavWord[12] = 0;
    // get the length
    int phrLen = sizeof (myFavWord) / sizeof (myFavWord[0]);
    // one way to check for null
    printf("The null character should start at index 12 which is -------%c-------\n", myFavWord[12]);
    // length of the overall list
    printf("The length of the list is %d and the phrase is 12 characters.\n", phrLen);
    // print the phase
    printf("My favorite phrase thing is \n%s\n", myFavWord);
    // This will iterate through each character of the phrase
    for (int i = 0; i < phrLen; i++){
        stringyCount = stringyCount + 1;
        // This checks the value at this index in the array to see if it is a null character. If it is then it prints.
        if (myFavWord[i] == 0) {
            printf("String count before null is: %d\nNULL CHARACTER\n", stringyCount - 1);
            break;
        }
    }
    return 0;
}