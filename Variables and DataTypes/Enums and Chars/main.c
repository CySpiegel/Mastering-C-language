/**
 * @file main.c
 * @author Matthew Stroble (chimiara999@msn.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

#define foo apple
#define str(x) #x
#define xstr(x) str(x)

int main()
{


    enum primaryColor {red, yellow, blue};

    enum primaryColor myColor;
    myColor = blue;

    enum month {January = 1, February, March, April, May, June, July, Augest, September, October, november, December};

    enum month currentMonth = December;

    printf("This month: %s\n", str(currentMonth));
    printf("This month is: %s\n", xstr(currentMonth) );
    printf("this is the end");

    return 0;
}