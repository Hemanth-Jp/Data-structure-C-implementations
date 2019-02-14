#include <stdio.h>
#include <math.h>

int main()
{
    int Number,numdigit=0,i,x,middle,number_copy,p,q,sum,one,second;
    printf("Enter the Number ");

    scanf("%d", &Number);
    number_copy=Number;
    while(Number>0)
    {
     numdigit=numdigit+1;
     Number=Number/10;
    }

    printf("number of digits present  %d \n" ,numdigit);
    if ( numdigit % 2)
    {
        printf("the number of digits is  ODD\n ");
        p=pow(10,(numdigit/2));
        x=number_copy/p;

        middle=x%10;
        printf("middle number is %d ",middle);

    }
    else
    {
        printf("the number of digits is  EVEN ");
        p=pow(10,(numdigit/2));
        x=number_copy/p;
        one=x%10;
        p=pow(10,(numdigit/2)-1);
        x=number_copy/p;
        second=x%10;
        sum=one+second;
        printf("sum of middle numbers is %d ",sum);
    }

    return 0;
}
