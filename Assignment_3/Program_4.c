////////////////////////////////////////////////////////
//     
//  File name :     Program_4.c
//  Descreption :   Accept one character from user
//                  convert case of that character.
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert (char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32 );
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}