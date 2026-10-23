// 5 – Check Divisibility by 5
// Problem Statement: Accept an integer and determine whether it is divisible by 5 without leaving any remainder.

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0){
        printf("Divisible by 5");
    }
    else {
        printf(" Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}