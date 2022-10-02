#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cin>>n;

    int arr[n];
    
    //Taking input
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original array: ";
    
    //Printing output
    for(i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }

    //Bubble sorting 
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //Printing sorted elements
    cout<<endl<<"Sorted: ";
    for(i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }

}