///////////////////////////////////////////////////////
//     
//  File name :     Program_5.c
//  Descreption :   Accept number from user and Check
//                  even or odd.
//  Author :        Prashant V. Surve
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////


/*5. Accept number from user and check whether number is even or
     odd.
*/     

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d" ,&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}