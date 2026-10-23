// Check Whether a Number Is Even or Odd

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if( iValue %2 == 0){
        printf("Numner is even");
    }
    else{
        printf("Numner is odd");  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}