//Diamond shape
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,m=1;
    cout<<"Enter the number of rows: ";
    cin>>n;

    //FIRST UPPER-HALF
    for(i=1; i<=n; i++)
    {
        //PRINTING SPACES
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        //PRINTING STARS
        for(k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //LOWER HALF
    for(i=n-1; i>=1; i--)
    {
        //FOR SPACES
        for(j=1; j<=m; j++)
        {
            cout<<" ";
        }
        //FOR STARS
        for(k=(2*i-1); k>=1; k--)
        {
            cout<<"*";
        }
        m++;
        cout<<endl;
    }

    return 0;
}