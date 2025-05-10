///////////////////////////////////////////////////////
//     
//  File name :     Program_1.c
//  Descreption :   Accept one number from user and 
//                  print that number of *.
//  Author :        Prashant V. Surve
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}