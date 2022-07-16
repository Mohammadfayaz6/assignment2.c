//write a program to take amount in INR and convert int USD
#include<stdio.h>
int main()
{  
    float rupees;
    printf("Enter rupees\n");
    scanf("%f",&rupees);
    printf("INR=%.0f\n",rupees);
    float USD;
    USD=rupees/76.23;
    printf("USD=%.2f$",USD);
    return 0;
}