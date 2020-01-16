/*
Name: Charles Hackett
Date:16 January 2020
Project: performance lab 21-1

Function - "Recursive GCD"
5.39--> (recursive greatest common divisor) 
	The greatest common divisor of integers (x) and (y) is the largest integer that evenly divides both (x) and (y). 
    Write a function (gcd) that returns the greatest common divisor of (x) and (y). 
	The (gcd) of (x) and (y) is defined recursively as follows: if (y) is equal to 0, then (gcd(x, y)) 
    is (x); otherwise (gcd (x) and (y)) is (gcd (y, x % y)), where % is the remainder operator.

GCD(x, y)
Begin
      if y = 0 then
          return x;
      else
          Call: GCD(y, x%y);
      endif
End
*/

// define and include the things
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// Prototype the thing
int gcd(x, y);
// Instantiate main
int main(void)
{
    // Declare and set variables
    int x = 0;
    int y = 0;
    printf("2 numbers that you want: \n");// prompt the user
    scanf("%d %d" , &x, &y); // get input
    printf("The GCD of %d and %d is: %d\n", x, y, gcd(x, y)); // print the info and get the output from the function
	return 0;
}

int gcd(x, y) // inst the function
{
    if (y == 0) // if y is 0 then return x
    {
        return x;
    }
    else // if not then send the numbers to the function but with y in the x place and x%y in the y place to get remainder of 0
    {
        return gcd(y, x%y);
    }
}