/*
Name: CHarles Hackett
Date: 6 January 2020
Project: performance lab 1
*/
// bring in the header file
#include <stdio.h>
//instantiate main and our declarations
int main(void)
{
    int steaks;
	  float ribs;
	  double monies;
	  char steakHouse = 'A';
// print and get the things from the user
    printf("Enter the number of steaks you have: \n");
    scanf("%d", &steaks);

    printf("Enter the number of ribs you have: \n");
    scanf("%f", &ribs);

    printf("Enter how much monies you have: \n");
    scanf("%lf", &monies);


	// print the things and its size
	  printf("Your steak is %d \n", steaks);
	  printf("Your steak size is is %d \n", (int)sizeof(steaks));
	  printf("Your ribs is %f \n", ribs);
    printf("Your ribs size is %d \n", (int)sizeof(ribs));
	  printf("Your monies is %lf \n", monies);
    printf("Your monies size is %d \n", (int)sizeof(monies));
    printf("Your first character is %c \n", steakHouse);
    printf("Your steakhouse size is %d \n", (int)sizeof(steakHouse));

	
	return 0;
}
