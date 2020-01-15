/*
Name: Charles Hackett
Date:14 January 2020
Project: performance lab 19

NESTED CONTROL FLOW
Print all the even or odd numbers from 0 to 100.
Prompt the user for input to indicate odds or evens.
Loop from 0 to 100 and print all indicated numbers.
Use and IF statement to check if even or odd.
BONUS: Ask the user to continue with a DO-WHILE loop
* write a version with the counting loop written as a FOR loop, and a WHILE loop version.
*/

// bring in the things
#include <stdio.h>

// Instantiate our function to print odds or evens
int oddEven(i, y)
{
    if (y==1) // if y is 1
    {
        if (i % 2 != 0) // if the i mod 2 is not 0 then it is odd so print it
        {
            printf("%d\n", i);
        }            
    }
    else if (y == 2) // if y is 2
    {
        if (i % 2 == 0) // if i mod 2 is 0 then it is even so print it
        {
            printf("%d\n", i);
        }
        
    }
}
// instantiate main
int main()
{
    // declare and set the things     
    unsigned int y = 0;      
    unsigned int i = 1;
    unsigned int x = 1;
    // Prompt the user for input as long as y is not 1 or 2k
    {
        printf("Enter 1 to print ODD numbers 0 - 100 and 2 to print EVEN numbers 0 - 100: ");
        scanf("%d", &y);

    } 
    while (y != 1 && y != 2);
    // Prompt the user to pick which type of loop to do the things with
    do 
    {
        printf("Enter 1 for a for loop or 2 for a while loop:  ");
        scanf("%d", &x);
    }
    while (x != 1 && x != 2);
    if (x == 1) // if user selects 1 then do the for loop
    {    
        for(i; i <= 100; i++) // while i is less than 100 do the loop and increment i by 1
            {
            oddEven(i, y);
            continue; // continue loop for reasons
            }
    }
    else if (x == 2) // if the user chose 2 then do a while loop
    {
        while (i < 101)
        {
            oddEven(i, y);
            i++;
            continue; // continue loop for reasons
        }
    }
    return 0;
}