// 4 – Check Triangle Validity
// Problem Statement: Accept three integer values representing the lengths of the sides of a triangle.
// Determine whether they can form a valid triangle. All sides must be positive,
// and the sum of any two sides must be greater than the third side.

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if ( iSide1 > 0 && iSide2 > 0 && iSide3 > 0 ){
        if (( iSide1 + iSide2 > iSide3 )&&
            ( iSide2 + iSide3 > iSide1 )&&
            ( iSide1 + iSide3 > iSide2 ))
            {
                printf("Valid Triangle");
            }
        else
        {
            printf("InValid Triangle");
        }    
    }
    else 
    {
        printf("InValid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}