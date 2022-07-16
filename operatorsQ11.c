//write a program to input a number from the user and also input a digit
//append a digit int number and print the resulting value 
#include<stdio.h>
int main()
{
    int number,digit;
    printf("Enter a number \n");
    scanf("%d",&number);
    printf("Enter a digit\n");
    scanf("%d",&digit);
    printf("number=%d and digit=%d\n",number,digit);
    printf("the resulting value is %d%d",number,digit);

    return 0;
}