/*
    Demonstration Lab 4
        Formatted I/O
        Formatted Input (Strings)

        Read a string into a char array
        Specify a field-width to protect against buffer overflow
        Ensure the field-width leaves room for the nul-terminator
        Stop reading at the first capital letter or new line


    Demonstration Lab 5
        Formatted I/O (scanf)
        Formatted Input (Numbers)

        Read three ints, representing the date, from one line
        Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
        Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
        Specify the field width of the output appropriately

    Lab 8: scanf
        Part 1
            Formatted Input (strings)
            Read a first, middle and last name as input into separate char arrays
            Specify a field-width to protect against buffer overflow
            Ensure the field-width leaves room for a nul-terminator
            Specify a ("\t") as a delimitating character
            Print the full name, separating each string with a tab and newline ("\t\n")
        Part 2
            Formatted Input (numbers)
            Read two integers from one line
            Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
            Reprint the two integers and result as if the answer were being read by a human
            ////////////// EXAMPLE #1 ///////////////
            OUTPUT:  Enter two integers, separated by a *, to be multiplied…
            INPUT:   2*3
            OUTPUT:  The result of 2 multiplied by 3 is 6.  
            ////////////// EXAMPLE #2 ///////////////
            OUTPUT:  Enter two integers, separated by a *, to be multiplied…
            INPUT:   11*14
            OUTPUT:  The result of 11 multiplied by 14 is 154.


*/

/*
    /////////////////////////////////////////
    /////////// SCANF STATEMENTS ////////////
    /////////////////////////////////////////

    scanf(“%d,%d”, &num1, &num2);    // Uses comma as delimiter
    scanf(“%3f”, &GPA);              // Only takes three inputs e.g., 3.4
    scanf(“*%lf”, &posSqrtTwo);      // Waits for asterisk before reading
    scanf(“%[abcd]c”, &ansNum1);     // Will only read an a, b, c, or d
    scanf(“%[A-Z]c”, &capsChar);     // Will only read a capital letter
    scanf(“%[A-z]c”, &rngOfChar);    // Only chars of decimal value 65–122
    scanf(“%32[01]s”, binaryStr);    // Stops reading at first non 0 or 1 
    scanf(“%64[^e\n]s”, Gadsby);     // Stops reading at first e or newline
*/

 // Bring in the library
#include <stdio.h>

int killa(void)
{
    // fseek(stdin,0,SEEK_END);
    int c;

    while ( (c = getchar()) != '\n' && c != EOF ) // While loop that sets c to getchar() and while c isnot a new line increment c until the end of stream
        {
        // THIS IS LEFT BLANK
        }
    return 0;
}
// Instantiate Lab4

int lab4(void)
{
    
    char someString[20] = {0}; // Declare the array
    printf("Enter some text. Capital letters end it...\n: "); // Prompt the user
    scanf("%19[^A-Z\n]s", &someString); // Take the input up to 19 characters that is not a capital or a new line
    printf("Here is your string with the rules! \n%s\n", &someString); // Output for the user
    return 0;
}


int lab5(void)
{
    // Declare and set variables
    int month = 0;
    int day = 0;
    int year = 0;
    printf("Enter the date as <MM>-<DD>-<YYYY> (01-01-1990): \n:"); // Prompt the user
    scanf("%d%*c%d%*c%d", &month, &day, &year); // Take the numbers that we put in
    printf("\nYou entered: %02d/%02d/%04d\n", month, day, year); // Output for the user in the new format
    return 0;
}

int lab8(void)
{
    // Declare the variables and arrays
    char first[20] = {0};
    char middle[20] = {0};
    char last[20] = {0};
    int num1;
    int num2;
    printf("Enter a name First    Middle    Last. Separate each with a tab or a \\t. \n: "); // Prompt the user
    scanf("%19s\t%19s\t%19s", &first, &middle, &last); // Get the input separated by tabs
    printf("You entered: \n%s \t\n%s \t\n%s \t\n", first, middle, last); // Output the data with tabs and ndw lines
    printf("\n\nEnter 2 numbers to be multiplied together separated by a *. IE 2*3.\n:"); // Prompt the user
    scanf("%d*%d", &num1, &num2); // Get the input with 2 numbers
    printf("\nThe result of %d multiplied by %d is %d.\n\n", num1, num2, num1 * num2); // Output and format the data
    return 0;
}
// Declare main
int main(void)
{
    printf("Demo Lab 4:\n"); // Tell the user what lab they are fixing to do
    lab4(); // Execute the function for the lab
    killa();
    printf("Demo Lab 5:\n"); // Tell the user what lab they are fixing to do
    lab5(); // Execute the function for the lab
    killa();
    printf("Performance Lab 8:\n"); // Tell the user what lab they are fixing to do
    lab8(); // Execute the function for the lab
    return 0;
}
