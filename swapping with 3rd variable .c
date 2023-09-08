#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("%d is a %d is b before sawaping\n",a,b);
    swap=a;
    a=b;
    b=swap;
    printf("%d is a %d is b",a,b);
}
