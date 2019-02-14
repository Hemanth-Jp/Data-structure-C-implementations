/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
int check(int);// check fun declaration
rem=0;
int main()
{
    int Number,square,a;

    printf("Enter the Number to be checked: ");

    scanf("%d", &Number);

    rem=check(Number);


    if (rem)

    printf("the number  %d is  ODD ", Number);

    else
        printf("the number  %d is  EVEN ", Number);


    return 0;
}


check(a)
{
  rem = a % 2;
  return rem ;
}
