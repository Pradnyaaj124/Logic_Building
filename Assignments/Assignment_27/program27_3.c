/*
3. Write a program which accept string from user and return difference between 
frequency of small characters 
and frequency of capital characters.

Input:
"Marvellous"


Output:
8 (9-1)
*/
#include<stdio.h>

int Difference(char *str)
{
    int iCCnt = 0;
    int isCnt = 0;

    while(*str != '\0')
    {
        if( *str >= 'a' && *str <= 'z')
        {
            isCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCCnt++;
        }

        str++;
    }

    return isCnt - iCCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}