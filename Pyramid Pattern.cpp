//Pyramid Pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the number of rows: ";
    cin>>n;

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

    return 0;
}