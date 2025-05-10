///////////////////////////////////////////////////////
//     
//  File name :     Program_3.c
//  Descreption :   Use to print 5 to 1 numbers.
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>

void Display()
{
    int i = 5;

    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }    

}

int main()
{
    Display();
    
    return 0;
}