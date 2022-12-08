/*
You are given an array of n integers.
 You want to modify the array so that it is increasing, 
 i.e., every element is at least as large as the previous element.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,difference;
    cin>>n;
    long long arr[n],i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=1; i<n; i++)
    {
        if(arr[i-1] > arr[i])
        {
            difference = arr[i-1] - arr[i];
            sum += difference;
            arr[i] = arr[i-1];
        }
    }
    cout<<sum;
    return 0;
}