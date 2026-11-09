/*
Question 4: Write a program which accept three numbers and print its multiplication.

Input : 5  7  4
Output : 140

Input : 5  0  7
Output : 35

Input : 5  0  0
Output : 5

Input : 0  0  0
Output : 0
*/

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iRes = 0;

    if(iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
    {
        iRes = iNo1 * iNo2 * iNo3;
    }
    else if(iNo1 == 0 && iNo2 != 0 && iNo3 != 0)
    {
        iRes = iNo2 * iNo3;
    }
    else if(iNo2 == 0 && iNo1 != 0 && iNo3 != 0)
    {
        iRes = iNo1 * iNo3;
    }
    else if(iNo3 == 0 && iNo1 != 0 && iNo2 != 0)
    {
        iRes = iNo1 * iNo2;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        iRes = iNo3;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        iRes = iNo1;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        iRes = iNo2;
    }

    return iRes;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d", iRet);

    return 0;
}
