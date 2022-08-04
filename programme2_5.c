//5. Write a program to input a three-digit number and display the sum of the digits.//
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf(" Enter Any Three Digit Number :");
    scanf("%d", &a);
    for(int i=1;i<4;i++)
    {
        sum+=(a%10);
        a/=10;
    }
        printf("Sum Of three digit is : %d",sum);
    
    return 0;
}