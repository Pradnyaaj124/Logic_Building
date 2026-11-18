/*
4. Write a program which accept string from user and accept one character. 
Return index of last occurrence of that character.

Input :
"Marvellous Multi OS"

M


Output :
11


Input :
"Marvellous Multi OS"

W


Output :
-1


Input :
"Marvellous Multi OS"

e


Output :
4
*/
#include<stdio.h>

int LastChar(char *str, char ch)
{
        int idx = -1;
        int iLastOccurance = 0;

        while (*str != '\0')
        {
                if (*str == ch)
                {
                    idx = iLastOccurance;
                }

                iLastOccurance++;
                str++;
        }
        return idx;
}

int main()
{
        char arr[20];
        char cValue;
        int iRet = 0;

        printf("Enter string : ");
        scanf("%[^\n]",arr);

        printf("Enter the character : ");
        scanf(" %c",&cValue);

        iRet = LastChar(arr, cValue);

        printf("Character location is %d",iRet);

        return 0;
}