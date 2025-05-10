//////////////////////////////////////////////////////////
//     
//  File name :     Program_5.c
//  Descreption :   Accept one character from user and
//                  check whether that is Vowel or not.
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
//////////////////////////////////////////////////////////


#include <stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel (char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || 
       cValue == 'o' || cValue == 'u' || cValue == 'A' || 
       cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue );
    
    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    return 0;

}