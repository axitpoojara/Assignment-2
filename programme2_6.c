//6. Write a program which takes a character as an input and displays its ASCII code.//
#include<stdio.h>
int main()
{
    char a;int x;
    printf ("Enter Any Character :");
    scanf("%c", &a);
    x=a;
    printf("ASCII code of %c is %d",a,x );
    return 0;
}