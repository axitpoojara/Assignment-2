//8. Write a program to check whether the given number is even or odd using a bitwiseoperator.  //
#include<stdio.h>
int main()
{
    int x;
    printf(" Enter Any Number :");
    scanf("%d", &x );
     int result= x&1;
    if (result == 1)
        printf( "Odd Number");
    else
        printf("Even Number");
    return 0;
}
