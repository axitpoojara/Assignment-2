/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf(" Enter any three digit number :");
    scanf("%d",&a);
    f=a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a;
    e=(b*100)+(d)+(c*10);
    printf("three digits %d rotate one posotion towards right is %d ",f,e);
    return 0;
    /* other way to solve is
    #include<stdio.h>
    int main() {
    int a;
    printf("Enter a three digit number:  ");
    scanf("%d", &a);
    // TODO doubt solved
    printf("%d", (a % 10) * 100 + (a / 10));
    return 0;
    }*/
