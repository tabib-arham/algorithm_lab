#include<stdio.h>

void insertionsort(int arr[],int size)
{
    int temp,i,j,key;
    for(i=1;i<size;i++)
    {key=arr[i];
      j=i-1;
       while(arr[j]>key&&j>=0)
        {
           arr[j+1]=arr[j];
           j=j-1;
        }
        arr[j+1]=key;
    }


}
int main()
{
    int arr[500],i,n,size;
    printf("enter the array size\n");
    scanf("%d",&n);
    size=n;
    printf("enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,size);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
