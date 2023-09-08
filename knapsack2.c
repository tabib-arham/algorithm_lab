#include<stdio.h>
int main()
{
int n;
printf("enter the number of objects\n");
scanf("%d",&n);
float weight[n];
printf("enter the weight of each object\n");
for(int i =0;i<n;i++)
{
scanf("%f",&weight[i]);
}
float price[n];
printf("enter the price of each objects");
for(int i =0;i<n;i++)
{
scanf("%f",&price[i]);
}
int capacity;
printf("enter the bag capacity\n");
scanf("%d",&capacity);
float j=0,pofw,arr[n];
for(int i=0;i<n;i++)
{
    pofw=price[i]/weight[i];
    j++;
    arr[i]=pofw;
    printf("%f\n",arr[i]);
}
for(int step=0;step<n-1;step++)
{
    for(int i=0;i<n-step-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            int temp2=weight[i];
            weight[i]=weight[i+1];
            weight[i+1]=temp2;
            int temp3=price[i];
            price[i]=price[i+1];
            price[i+1]=temp3;
        }

    }

}
float x[n],profit=0;
for(int i=0;i<n;i++)
{
    if(weight[i]<capacity)
    {
        x[i]=1;
        capacity=capacity-weight[i];
    }
    else
    {
        x[i]=capacity/weight[i];
        break;
    }
    profit+=price[i]*x[i];
}
for(int i=0;i<n;i++)
{
    printf("things needed %f\n",x[i]);

}
printf("total profit is %f ",profit);
}
