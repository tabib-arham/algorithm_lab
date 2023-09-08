#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d is a and %d is b",a,b);
}
