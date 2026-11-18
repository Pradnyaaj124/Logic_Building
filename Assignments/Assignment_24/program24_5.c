/*
5. Write a program which accept string from user reverse that string in place.

Input :
"abcd"


Output :
"dcba"


Input :
"abba"


Output :
"abba"
*/
#include<stdio.h>

void StrRevX(char *str)
{
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

int main()
{
        char arr[20];

        printf("Enter string : ");
        scanf("%[^\n]",arr);

        StrRevX(arr);

        printf("Modified string is : %s",arr);

        return 0;
}