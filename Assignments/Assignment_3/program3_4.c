// convert case of input character 

#include<stdio.h>

void DisplayConvert ( char CValue)
{
    if( CValue >= 'a' && CValue <= 'z' ) //logic to convert lower to upper
    {
        printf("%c", CValue - 32 );
    }
    else if( CValue >= 'A' && CValue <= 'Z' )  //logic to convert upper to lower
    {
        printf("%c", CValue + 32 );
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}