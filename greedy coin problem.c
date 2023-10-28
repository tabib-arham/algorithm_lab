#include<stdio.h>
void sort_coin(int coin[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(coin[j]<coin[j+1])
            {
                temp=coin[j];
                coin[j]=coin[j+1];
                coin[j+1]=temp;
            }
        }
    }
}
void find_min(int coin[],int exchange_coin,int size)
{
    int coinlist[size];
    int i,k=0;
    for(i=0;i<size;i++)
    {
        while(exchange_coin>=coin[i])
        {
            exchange_coin-=coin[i];
            coinlist[k++]=coin[i];
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",coinlist[i]);
    }
}
int main()
{int n;
printf("enter the numbers of available coin\n");
scanf("%d",&n);
    int coin[n];
    printf("enter the available coins\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
    }
    int exchange_taka;
    printf("enter the taka to be exchanged\n");
    scanf("%d",&exchange_taka);
    sort_coin(coin,n);
    find_min(coin,exchange_taka,n);
}
