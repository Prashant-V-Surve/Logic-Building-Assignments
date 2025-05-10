///////////////////////////////////////////////////////
//     
//  File name :     Program_5.c
//  Descreption :   Accept a number from user and
//                  print that number of *.
//  Author :        Prashant V. Surve
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;

}