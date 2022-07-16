//write a program to swap values of two int variables 
#include<stdio.h>
int main()
{
    int A,B;
    printf("enter a two numbers\n",A,B);
    scanf("%d%d",&A,&B);
    printf("before swapping\n A=%d and B=%d\n",A,B);
    int C;
    C=A;
    A=B;
    B=C;
    printf("after swapping\n A=%d and B=%d",A,B);


    return 0;
}