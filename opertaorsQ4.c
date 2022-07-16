//write a program to swap values of two int variables without 
//using third variable
#include<stdio.h>
int main()
{
    int x=11,y=22;
    printf("before swapping\n x=%d and y=%d\n",x,y);
    x=x+y;   //swapping without using third variable//
    y=x-y;
    x=x-y;
    printf("after swapping\n x=%d and y=%d",x,y);
    return 0;
}