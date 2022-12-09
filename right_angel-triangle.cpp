//RIGHT ANGLE TRIANGLE  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of rows: ";
    cin>>n; 
    for(i=1; i<=n; i++)//FOR ROW
    {
        for(j=1; j<=i; j++)//FOR COLUMN
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}