// 2 – Check Leap Year
// Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar rules.
// A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100.
// Consider years less than or equal to zero as invalid.

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear > 0 && ((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0)))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }

}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}