#include<stdio.h>
int maximum(int arr[],int n);
int main()
{
    int arr[]={5,7,2,6,9,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d",maximum(arr,n));
}

int maximum(int arr[],int n)
{
    int max;
    max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}