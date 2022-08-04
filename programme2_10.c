//10. Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)//
#include<stdio.h>
int main()
{
    int x; int y;int z;
    printf("enter any number :");
    scanf("%d", &x );
    y=x/10;
    z=y*10;
    printf(" new number with zero is %d",z);
    // you can write like printf("new number is %d",(10*(x/10))   there is no requirement of y and z//
    return 0;

}
