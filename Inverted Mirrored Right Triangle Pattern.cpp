//Inverted Mirrored Right Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<endl;

    //ROW
    for(i=1; i<=n; i++)
    { 
        //PRINTING SPACES
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }
        //PRINTING STARS
        for(k=i; k<=n; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
