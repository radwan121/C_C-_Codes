//Inverted Right Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n; 
    for(i=n; i>=1; i--)//FOR ROW
    {
        for(j=1; j<=i; j++)//FOR COLUMN
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}