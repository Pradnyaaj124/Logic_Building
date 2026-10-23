// 3 – Calculate Student Grade
// Problem Statement: Accept the marks of a student out of 100 and display the grade according to the following criteria.
// Marks outside 0–100 are invalid.

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid input");
    }
    else if( fMarks >= 90 && fMarks <= 100)
    {
        printf("Grade A");
    }
    else if (fMarks >= 75 && fMarks < 90)
    {
        printf("Grade B");
    }
    else if (fMarks >= 60 && fMarks < 75)
    {
        printf("Grade C");
    }
    else if (fMarks >= 40 && fMarks < 60)
    {
        printf("Grade D");
    }
    else{
        printf("Fail");
    }


}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}