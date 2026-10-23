// 4 – Check Divisibility by 3 and 5
// Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5,
// only 3, only 5, or neither.

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if ( (iValue % 3 == 0) && (iValue % 5 == 0)){
        printf("Divisible by both");
    }
    else if ( (iValue % 3 == 0) ){
        printf("Divisible by 3 onlly");
    }
    else if ( (iValue % 5 == 0) ){
        printf("Divisible by 5 only");
    }
    else {
        printf("Divisible by neither");
    }
}

// void CheckMultipleDivisibility(int iValue)
// {
//     if (iValue % 3 == 0)
//     {
//         if (iValue % 5 == 0)
//         {
//             printf("Divisible by Both");
//         }
//         else
//         {
//             printf("Divisible by 3 Only");
//         }
//     }
//     else if (iValue % 5 == 0)
//     {
//         printf("Divisible by 5 Only");
//     }
//     else
//     {
//         printf("Not Divisible by Either");
//     }
// }

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}