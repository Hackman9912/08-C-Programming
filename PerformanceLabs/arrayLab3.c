/*
Name: CHarles Hackett
Date: 7 January 2020
Project: performance lab 3, Arrays

............  Objective  ...........

Tasks:
Student ages
Declare and zeroize an int array with a dimension equal to the number of students + 1
Set index 0 with the age* of the instructor
Fill the elements of the array with the ages* of the students starting with index 1
Print the array

Favorite quote
Declare and initialize a char array with your favorite saying
Ensure the last index is set to nul ('\0')
Separate each word in the array with a new line character ('\n' or decimal value 10)
NOTE: * use your best guess

*/

// Bring in the libraries
#include <stdio.h>
#include <ctype.h>
# include <unistd.h>

// Instantiate main
int main(void)
{
    // Declare and instantiate the arrays
    int students [10] = {0};
    char quote [] = {"I've been chewed out before! \0"};
    char quote1 [] = {"I've\n been\n chewed\n out\n before!\n \0"};
    students [0] = 30;
    // Iterate through the list of students and set the age of each one to be one less than the last
    for (int i = 1; i < (sizeof (students) /sizeof (students[0])); i++){
        students [i] = (students [i - 1] - 1);
    }
    // iterate through the ages and print them
    printf("Here are the student ages: \n");
    for (int i = 0; i < (sizeof (students) /sizeof (students[0])); i++){
        printf("%d\n", students[i]);
    }
    // Sleep for a second for readability
    sleep(1);
    // print the quote as a string. This quote has the new lines at each space
    printf("\nHere is the quote as a string...:\n %s", quote1);
    sleep(1);
    printf("\nAnd here is the quote as a loop...:\n");
    sleep(1);
    // This will iterate through each character of the quote written out properly
    for (int i = 0; i < (sizeof (quote) /sizeof (quote[0])); i++){
        // This checks the value at this index in the array to see if it is a space. If it it then it will print a new line
        if (isspace(quote[i])) {
            printf("\n");
        }
        // If not it prints the value
        else {
            printf("%c", quote[i]);            
        }        
    }
    // Return 0 to die
    return 0;
}