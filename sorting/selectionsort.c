#include<stdio.h>
void swaping(int *p1,int *p2)
{
    int temp=p1;
    p1=p2;
    p2=temp;
}
void selectionsort(int arr[],int size)//4
{
    int i,j,temp,min;
    for(i=0;i<size-1;i++)//0 ||0<3//1<3
    { min=i;
        for(j=i+1;j<size;j++)//0
        {
            if(arr[j]>arr[min])
            {
                min=j;

            }

        }
       swaping(&arr[i],&arr[min]);
    }
}
void printing(int arr[],int size)
{
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
    selectionsort(arr,size);
    printing(arr,size);
}

