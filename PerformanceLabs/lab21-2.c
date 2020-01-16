/*
Name: Charles Hackett
Date:16 January 2020
Project: performance lab 21-2

Function - "Recursive Main"
5.40--> (recursive main) 
	Can main be called recursively? Write a program containing a function   (main). Include (static) local variable count 
    initialized to 1. Post-increment and print the value of count each time main is called. What happens when your program 
    runs?
*/

// define and include the things
#include <stdio.h>
// Instantiate main
int main(void)
{
    static int count = 1; // declare and set the static local variable that will be incremented
    printf("Main has been called %d times.\n", count); // print the main and count
    count ++; // increment count
    main(); // call main until segmentation fault
	return 0;
}
