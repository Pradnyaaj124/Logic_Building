/*
5. Write a program which accept string from user and count number of white spaces.

Input :
"Marvellous"


Output :
0


Input :
"Marvellous Infosystems"


Output :
1


Input :
"Marvellous Infosystems by Piyush Manohar Khairnar"


Output :
5
*/
#include<stdio.h>

int CountWhite(char *str)
{
        int count = 0;
        while(*str != '\0')
        {
                if(*str == ' ')
                {
                        count ++;
                }
                str++;
        }
        return count;
}

int main()
{
        char arr[20];
        int iRet = 0;

        printf("Enter string");
        scanf("%[^\n]",arr);

        iRet = CountWhite(arr);

        printf("%d",iRet);

        return 0;
}