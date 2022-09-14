#include<stdio.h>

void reverse(int i,int n,int arr[]);
int main()
{
    int n,i;
    scanf("%d",&n);//Taking size

    int arr[n];
    //taking elements
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printing elements
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Calling the reversed array
    reverse(0, n, arr);

}

//recursive funnction to reverse an array
void reverse(int i,int n,int arr[])
//here i is index numbers
//here n is the size of the array
{
    if(i==n)//if the array has no element
    {
        return 1;
    }
    else
    {
        reverse(i+1, n, arr);
    }
    printf("%d ",arr[i]);

}