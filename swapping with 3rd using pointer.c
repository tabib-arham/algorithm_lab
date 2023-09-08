#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,temp;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("%d is a %d is b before sawaping\n",a,b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d is a %d is b",a,b);

}
