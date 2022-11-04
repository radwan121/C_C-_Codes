#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp,temp2;
    cin>>n;

    int arr[n];
    //TAKING ARRAY ELEMENTS
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements: ";
    //PRINTING ARRAY ELEMENTS
    for(i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
    //FINDING SECOND HIGHEST 
    temp = arr[0];
    temp2 = arr[1];
    for(i=0; i<n; i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
            
        }
    }

    for(i=0; i<n; i++)
    {
        if(temp>arr[i] && temp2<arr[i])
        {
            temp2 = arr[i];
        }
    }
    //HIGHEST ELEMENT OF THE ARRAY
    cout<<endl<<"Second highest: "<<temp2;
}
