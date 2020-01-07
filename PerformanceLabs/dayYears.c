/*
Name: CHarles Hackett
Date: 7 January 2020
Project: Days to Years
*/
// Include the things
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// instantiate the main
int main(void)
{
    // Declare my variables
    int days;
	double weeks;
    double years;
    double remDays;
    // Get the days
    printf("Enter the number of days: \n");
    scanf("%d", &days);
    // The first way to do it...
    // Uses floor to round down and PEMDAS to get the maths
    /*
    // Set the remaining variables
    years = floor(days /365);
    weeks = floor((days - (years * 365))/7);
    remDays = floor(days - ((years * 365) + (weeks * 7)));
    */
    // The second way to do it
    // Uses mod and simple math
    // Set the remaining variables
    years = days / 365;
    weeks = (days % 365) / 7;
    remDays = (days % 365) % 7;
    // print the results	
	printf("That is %.0f years, %.0f weeks, and %.0f days \n", years, weeks, remDays);
	return 0;
}