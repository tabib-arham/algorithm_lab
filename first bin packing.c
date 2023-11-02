#include<stdio.h>
int main()
{
    int bin_size,n;
    printf("enter the bin capacity\n");
    scanf("%d",&bin_size);
     printf("enter the number of groups\n");
     scanf("%d",&n);
    int group[n];
    printf("enter the number of people in each group\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&group[i]);
    }
    int bin=bin_size,count=0;
    for(int i=0;i<n;i++)
    {
        if(group[i]<bin)
        {
            bin-=group[i];
            count++;
        }
        else
        {
            bin=bin_size;
        }
    }
    printf("total bin needed %d\n",count);
}
