#include<stdio.h>
int summing(int n)
{
    if(n!=0)
    {
        return n+summing(n-1);
    }
    else
        return n;
}
int main()
{
    int n;
    scanf("%d",&n);//4
    printf("%d",summing(n));

}

