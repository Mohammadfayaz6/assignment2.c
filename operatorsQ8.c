//write a program to check whether a given number is even or odd
//using bitwise operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a intger number\n");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
       return 0;
}