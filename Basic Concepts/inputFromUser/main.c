/**
 * @file main.c
 * @author Matthew Stroble (chimiara999@msn.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>


int main()
{
    // Creates a character array with space for 100 characters
    char str[100];

    // Creates an integer variable
    int number;

    // Prints message to the screen
    printf("INput Somthing:");

    // Pauses Command line interface and awaits input from user
    // This is not input clensed so you must input what the program is expecting
    // for it to function properly "string integer"
    scanf("%s %d", str, &number);

    // Prints the string number the user entered to the screen
    printf("\nYou Entered: %s, %d\n", str, number);

    // allows main to exit with 0
    return 0;
}