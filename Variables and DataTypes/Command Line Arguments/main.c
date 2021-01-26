/**
 * @file main.c
 * @author Matthew Stroble (chimiara999@msn.com)
 * @brief showing off program with arguments
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020
 * 
 */


#include <stdio.h>

int main(int argc, char *argv[])
{
    int numOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);    

    return 0;
}