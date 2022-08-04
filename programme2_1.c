//1. Write a program to print unit digit of a given number//
#include<stdio.h>
int main()
{
   int a;
    printf("Enter any Number :");
    scanf("%d",&a);
    printf("Unit Digit of %d is %d",a,a%10);
    return 0;
}