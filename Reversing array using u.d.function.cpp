#include<stdio.h>

void printarray(int arr[],int n);
void reversearray(int arr[],int n);
int main()
{
    int n,i;

    //Taking he size of the array
    scanf("%d",&n); 

    int arr[n];
    //Taking input of the arrray
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //Calling function to display the initial array
    printarray(arr,n);

    //Calling the reversed function
    reversearray(arr,n);

    //printing the reversed array
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

//Printing the array
void printarray(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//reversing array
void reversearray(int arr[],int n)
{
    int i,temp;
    for(i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}
