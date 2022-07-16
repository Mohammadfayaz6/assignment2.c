//write a program to take three digit number from the user 
//and rotate its digit by one position towards the right
#include<stdio.h>
int main()
{
    int x,result;
    printf("enter a three digit number\n");
    scanf("%d",&x);
    result=x%10*100+x/10;
    printf("%d",result);
    return 0;

}