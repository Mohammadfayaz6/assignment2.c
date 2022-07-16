//write a program to print given number with out its last digit
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    int sum;
    sum=num/10;
    printf("%d",sum);
    return 0;
}