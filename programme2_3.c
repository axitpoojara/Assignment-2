//3. Write a program to swap values of two int variables//
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter Any Two Number :");
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap Two values are :%d & %d",a,b);
    return 0;
}