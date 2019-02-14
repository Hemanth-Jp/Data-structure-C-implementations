#include<stdio.h>

long factorial(int);

int main()
{
  int n,temp,sum,i;
  long f;

  for(i=1;i<6;i++)
  {
  n=i;
  f = factorial(n);
  temp=f/i;
  sum=sum+temp;
  }
  printf(" series sum = %ld\n", sum);

  return 0;
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
