/*
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x,i,n;
    cin>>n;

    for(i=1; i<=n-1; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    if(n==2)
    {
        if(v[0] == 1)
        {
            cout<<2;
        }
        else
        {
            cout<<1;
        }
    }

    else
    {
        for(i=1; i<=v.size(); i++)
        {
            if(v[i-1] != i)
            {
                cout<<i;
                break;
            }
            else if(v[i-1] == (n-1))
            {
                cout<<n;
            }
        }
    }
    return 0;
}
