//////////////////////////////////////////////////////////
//     
//  File name :     Program_1.c
//  Descreption :   Accept a number from user and print
//                  that number of even numbers.
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int i = 0;
    int num = 2;

    for(i = 1; i<=iNo ;i++)
    {
        printf("%d ",num);
        num +=2;
    }

   
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    printf("\n");

    return 0;
}