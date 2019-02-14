/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
int main()
{
    int Number,square;

    printf("Enter the Number to be checked for Armstrong: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d", &Number);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    square = Number * Number;

    // Displays sum
    printf("square of the number  %d is  %d", Number, square);

    return 0;
}
