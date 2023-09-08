#include<stdio.h>
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
}
void merge(int arr[], int low, int mid, int high) {
  int n1 = mid- low+ 1;
  int n2 = high - mid;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[low + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mid+ 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = low;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[999],n,i,size;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array element\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    size=n;
    int high=n-1;
    int low=0;
    mergesort(arr,low,high);
    print(arr,size);
}

