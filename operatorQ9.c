//write a program to print size of an int,a float,a char,
//a double  type variable
#include<stdio.h>
int main()
{
    int x;
    char y;
    float z;
    double d;
    x=sizeof(int);
    printf("size of int is :%d bytes \n",x); 
    y=sizeof(char);
    printf("size of char is :%d bytes \n",y);
    z=sizeof(float);
    printf("size of float is :%.0f bytes \n",z);
    d=sizeof(double);
    printf("size of double is :%.0lf bytes ",d);
    return 0;
}