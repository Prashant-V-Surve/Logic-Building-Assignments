//////////////////////////////////////////////////////////
//     
//  File name :     Program_2.c
//  Descreption :   Accept a number from user and print
//                  even factors of that number
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i ==0 && i%2 == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    printf("\n");

    return 0;
}