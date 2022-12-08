#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;

    cout<<n<<" ";
    while(1)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            x=n/2;
        }
        else
        {
            x=(n*3+1);
        }
        cout<<x<<" ";

        n=x;
    }
    return 0;
}