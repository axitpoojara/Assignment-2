//2. Write a program to print a given number without its last digit.//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    printf("Given Number %d without last digit is %d",num,num/10);
    return 0;
}