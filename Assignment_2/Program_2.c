///////////////////////////////////////////////////////
//     
//  File name :     Program_2.c
//  Descreption :   Accept one number from user and
//                  print that number of *.
//  Author :        Prashant V. Surve
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////


//2. Accept one number from user and print that number of * on screen.

#include <stdio.h>

void Display(int iNo)
{
    iNo ;
    while( iNo>0)
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}