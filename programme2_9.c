//9. Write a program to print size of an int, a float, a char and a double type variable//
#include<stdio.h>
int main()
{
    int i ; float f ;char c ; double d;
    printf("size of int is %d \n size of float is %d \n siz of char is %d \n size of double is %d",sizeof(i),sizeof(f),sizeof(c),sizeof(d));
    return 0;
}