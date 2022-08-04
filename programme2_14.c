/* it is not in assignment but by product of q.13
question is enter three digit number and do like this 
eg. q. 456 ans is 645
so please check whether it is correct or not or any short code is avalable or not*/
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
    e=(b*100)+(d*10)+(c);
    printf("three digits %d rotate one posotion towards right is %d ",f,e);
    return 0;

}
