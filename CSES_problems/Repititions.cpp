/*
You are given a DNA sequence: 
a string consisting of characters A, C, G, and T.
 Your task is to find the longest repetition in the sequence.
  This is a maximum-length substring containing only one type of character.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l,i,cnt=1,max_length=0;

    l = str.size();
    for(i=0; i<l; i++)
    {
         
        if(str[i] != str[i+1])
        {
            max_length = max(max_length,cnt);
            cnt=1; 
        }
        else
        {
            cnt++;
        } 
    }
    cout<<max_length;
    return 0;
}
