/*
Name: CHarles Hackett
Date: 7 January 2020
Project: performance lab 2, Variable conversion

............  Objective  ...........

Declare and initialize variables of data types:

int
float
double
char
Type cast and print the following:

int -> float
int -> char
float -> double
double -> float
char -> int
33 -> char
Note: Initialize int to a value between 32 and 126
*/

// Bring in the library
#include <stdio.h>
// Instantiate main
int main(void)
{
    // Declare and set initial vars
    int integer = 1;
    float singlePrecision = 2.232323;
    double doublePrecision = 3.333333333333333;
    char singleChar = 123;
    
    
    // Print the things
    printf("Size of int is %d \n", (int)sizeof(integer));
    printf("int is %d \n\n", integer);

    printf("Size of float is %d \n", (int)sizeof(singlePrecision));
    printf("float is %.6f \n\n", singlePrecision);

    printf("Size of double is %d \n", (int)sizeof(doublePrecision));
    printf("double is %.15f \n\n", doublePrecision);

    printf("Size of char is %d \n", (int)sizeof(singleChar));
    printf("char is %c \n\n", singleChar);
    
    printf("Now cast as directed...\n\n");
    
    // Cast and reprint the things
    printf("Size of int as float is %d \n", (int)sizeof((float)integer));
    printf("int as float is %.6f \n\n", (float) integer);

    printf("Size of int as char is %c \n", (int)sizeof((char)integer));
    printf("int as float is %d \n\n", (char) integer);

    printf("Size of float as a double is %d \n", (int)sizeof((double) singlePrecision));
    printf("float as a double is %.15f \n\n", (float) singlePrecision);

    printf("Size of double as a float is %d \n", (int)sizeof((float) doublePrecision));
    printf("double as a float is %.6f \n\n", (float) doublePrecision);

    printf("Size of char as an int is %d \n", (int)sizeof((int) singleChar));
    printf("char is %d \n\n", (int) singleChar);

    printf("Size of 33 as char is %d \n", (int)sizeof((char) 33));
    printf("33 as char is %c \n\n", (char) 33);

    // Return 0 to close the program
    return 0;
}
