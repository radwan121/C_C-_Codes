#include<stdio.h>
int main()
{
    int n; //taking size of  array
    scanf("%d",&n);

    int arr1[n],arr2[n],i,j;
    //taking elements of array
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    //printing array1
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    //storing the reversed arr1 in arr2
    for(i=n-1,j=0; i>=0; i--,j++)
    {
        arr2[j]=arr1[i];
    }

    //displaying reversed array
    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}