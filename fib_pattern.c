#include <stdio.h>
//int nthf(int);
int fibo(int);

int main()
{
    int rows=5, i, j, number= 0;


    for(i=1; i <= rows; i++)
    {
        for(j=1; j <= i; ++j)
        {
            //printf("hello");
            printf("%d ",fibo(number));
            number++;
        }

        printf("\n");
    }

    return 0;
}



int fibo(int num)
{
    //printf("%d\n",num);

    if (num == 0)
    {
        return 0;
    }
    if(num ==1 )
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
