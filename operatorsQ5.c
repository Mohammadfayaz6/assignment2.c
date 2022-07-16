//write a program to input three digit mumber and display
//the sum of the digit
#include<stdio.h>
int main()
{
    int x=456;
    int sum=0;
    int rem;
  rem=x%10;
  x=x/10;
  sum=sum+rem;
  rem=x%10;
  x=x/10;
  sum=sum+rem;
  rem=x%10;
  x=x/10;
  sum=sum+rem;
  printf("%d",sum);

        return 0;
}