/*
5. Write a program which accept string from user and display it in reverse order.

Input:
"Marvellous"


Output:
"suollevraM"
*/
#include<stdio.h>

void Reverse(char *str)
{
    char temp;
    char *end = str;
    char *start = str;

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

    printf("%s", start);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    return 0;
}