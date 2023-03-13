//A permutation of integers 1,2,…,n
//is called beautiful if there are no adjacent 
//elements whose difference is 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==1)
    {
        cout<<"1";
    }
    else if(n==4)
    {
        cout<<"2 4 1 3"<<endl;
    }
    else
    {
        for(i=1; i<=n; i+=2)
        {
            cout<<i<<' ';
        }
        for(i=2; i<=n; i+=2)
        {
            cout<<i<<' ';
        }
    }

    return 0;
}