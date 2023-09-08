#include<stdio.h>
void bubblesort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printing(int arr[],int size)
{printf("after sorting \n");
    for(int i =0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[300],n,i,size;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    size=n;
    bubblesort(arr,size);
    printing(arr,size);
}
