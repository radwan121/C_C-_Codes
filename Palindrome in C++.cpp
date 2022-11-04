//Palindrome
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Taking string input 
    string str,str2;
    cin>>str;
    str2=str;

    reverse(str2.begin(), str2.end());
    
    if(str2 == str)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
