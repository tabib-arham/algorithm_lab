#include<stdio.h>
void print(int arr[],int size)
{
    printf("after sorting\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    while(low!=high)
    {
        if(pivot==arr[low])
        {
            if(arr[high]>pivot)
            {
                high=high-1;
            }
            else if(arr[high]<=pivot)
            {
                swap(&arr[low],&arr[high]);
                pivot=arr[high];
                low=low+1;
            }
        }
        else if(pivot==arr[high])
        {
            if(arr[low]<pivot)
            {
                low=low+1;
            }
            else if(arr[low]>=pivot)
            {
                swap(&arr[low],&arr[high]);
                pivot=arr[low];
                high=high-1;
            }
        }
    }
    return low;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
       int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
int main()
{
    int arr[200],i,n,size;
    printf("enter the araay size\n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1;
    size=n;
    quicksort(arr,low,high);
    print(arr,size);
}
