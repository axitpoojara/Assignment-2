//11. Write a program to input a number from the user and also input a digit. Append adigit in the number and print the resulting number. (Example - number=234 anddigit=9 then the resulting number is 2349)//
#include<stdio.h>
int main()
{
    int num, dit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Also enter a digit: ");
    scanf("%d", &dit);

    printf("Number %d and Digit %d  then the resulting  number is %d", num, dit, ((num * 10) + dit));
    return 0;
}

