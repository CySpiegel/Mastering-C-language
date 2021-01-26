/**
 * @file main.c
 * @author Matthew Stroble (chimiara999@msn.com)
 * @brief Format specifiers
 * @version 0.1
 * @date 2021-01-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    _Bool var = 1;
    int sum = 99;
    double num = 5.255555;
    char charVal = 'C';

    printf("The sum is %d\n The character is %c\n", sum, charVal);
    printf("Using print to round %.2f\n", num);
    return 0;
}