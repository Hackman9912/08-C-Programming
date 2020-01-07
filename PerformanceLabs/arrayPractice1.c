// Bring in the library
#include <stdio.h>

// Instantiate main
int main(void)
{
    // first
    int computerScienceCourses [5] = {1003, 1023, 1033, 1063, 1073};

    // second
    float studentGPAs [7] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};

    // third
    char cardinalDirections [4] = {0, 1, 2, 3};

    // fourth
    char catchPharse [10] = {76, 101, 103, 101, 111, 76, 101, 103, 101, 111};
    printf("Here is the 3rd element for first:\n %d\n", computerScienceCourses[2]);
    printf("Here is the 3rd element for second:\n %.1f\n", studentGPAs[2]);
    printf("Here is the 3rd element for third:\n %d\n", cardinalDirections[2]);
    printf("Here is the 3rd element for fourth:\n %c\n", catchPharse[2]);
    printf("Here is the quote:\n %s\n", catchPharse);
    return 0;
}