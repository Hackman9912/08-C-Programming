/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */


// define and include the things
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// Prototype the thing
unsigned long shadow_sequence_number(int placeNumber);
// Instantiate main
int main(void)
{
    // Declare and set variables
	unsigned long tempValue = 0;
    int numberWanted = 0;
    printf("Enter the sequence number you want less than 2300: ");// prompt the user
    scanf("%d", &numberWanted); // get input
    tempValue = shadow_sequence_number(numberWanted); // send the value to the recursive function
    if (tempValue == 105) // If the temp value is the error value then send an error message
    {
        printf("The shadow number that you asked for cannot be given to you.\n");
    }
    else // if not then print the value
    {
        printf("The shadow number that you want for place %d is: %lu\n",numberWanted, tempValue);
    }
    
	return 0;
}

unsigned long shadow_sequence_number(int placeNumber) // inst the function
{
    if (placeNumber <= 0 || placeNumber > MAXIMUM_SEQ_NUM) // if the thing is outside safe values send 105
    {
        return 105;
    }
    // hardcode 1 and 2
    else if (placeNumber == 1)
    {
        return 9;
    }
    else if (placeNumber == 2)
    {
        return 0;
    }
    // if not then send it to the recursive function
    else
    {
        return shadow_sequence_number(placeNumber - 1) + (placeNumber * placeNumber);
    }
}

