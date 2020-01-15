/*
Name: Charles Hackett
Date:14 January 2020
Project: PERFORMANCE LAB 20.1    

   (Rounding Numbers) Function floor may be used to round a number to a specific decimal place.
The statement rounds x to the tenths position (the first position to the right of the decimal point).
y = floor(x * 10 + .5) /10;
The statement rounds x to the hundredths position (the second position to the right of the decimal point).
y = floor(x * 10 + .5) /100;
Write a program that defines four functions to round a number x in various ways:
roundToInteger( number )
roundToTenths( number )
roundToHundreths( number )
roundToThousandths( number )
*/

// bring in the things
#include <stdio.h>
#include <math.h>

// Function prototype
int killa(void);
int rountToInteger(double*x);
int roundToTenths(double*x);
int roundToHundreths(double*x);
int roundToThousandths(double*x);
// instantiate main
int main()
{
    // declare and set the things 
    double act;    
    double num1;
    double num2;
    double num3;
    printf("Now enter a decimal number to round: "); // prompt the user
    scanf("%lf", &act); // get input
    num1 = act; // set the variable
    printf("You entered: %lf \n", num1); // print it
    roundToInteger(&num1); //round...rinse wash repeat.
    num1 = act;
    roundToTenths(&num1);
    num1 = act;
    roundToHundreths(&num1);
    num1 = act;
    roundToThousandths(&num1);
    return 0;
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

int roundToInteger(double*x)
{
    double y;
    y = floor(*x + .5);
    printf("Integer round is %.2lf\n", y);
    return 0;
}
// round the things using floor
int roundToTenths(double*x)
{
    double y;
    *x = ((*x * 10 )+ 0.5);
    y = floor(*x);
    printf("Your tenths round is %.4lf\n", y/10);
    return 0;
}

int roundToHundreths(double*x)
{
    double y;
    *x = ((*x * 100)+.5);
    y = floor(*x);
    printf("Your hundreths round is %lf\n", y/100);
    return 0;
}

int roundToThousandths(double*x)
{
    double y;
    *x = ((*x * 1000)+.5);
    y = floor(*x);
    printf("Your thousandths round is %lf\n", y/1000);
    return 0;
}