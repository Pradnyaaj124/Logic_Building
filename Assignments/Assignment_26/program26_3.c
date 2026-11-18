/*
3. Accept character from user. 
If it is capital then display all the characters from the input character till Z. 
If input character is small then print all the characters in reverse order till a. 
In other cases return directly.

Input: Q

Output: Q R S T U V W X Y Z.

Input: m

Output: m l k j i h g f e d c b a

Input: 8
*/
#include<stdio.h>

void Display(char ch)
{
    char Pch = '\0';
    if(ch >= 'A' && ch <= 'Z')
    {
        for(Pch = ch ;Pch <= 'Z'; Pch++)
        {
            printf("%c\t", Pch);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for(Pch = ch ;Pch >= 'a'; Pch--)
        {
            printf("%c\t", Pch);
        }
    }
    else{
        printf("%c\t", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
