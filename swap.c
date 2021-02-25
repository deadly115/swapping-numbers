#include<stdio.h>
main() 
{

int a;
int b;
printf("enter two numbers which you wanna swap ");
scanf("%d",&a);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf(" after swap  the result is a=%d b=%d",a,b);

}
