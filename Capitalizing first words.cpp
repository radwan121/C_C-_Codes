#include<bits/stdc++.h>
using namespace std;
int main()
{
    char string[100]="cpp string exercises";
    int i;

    //This loop will continue until null character is found
    for(i=0; string[i]; i++) //string[i] also works as string[i]!='\0'.
    {
        if(i == 0)//First letter is captialized
        {
            if(string[i]>='a' && string[i]<='z')
            {
                string[i]=string[i]-32;
                cout<<string[i];
            }
        }

        //If space found then make the next letter Capital
        else if(string[i-1]==' ')
        {
            if(string[i]>='a' && string[i]<='z')
            {
                string[i]=string[i]-32;
                 cout<<string[i];
            }
        }

        else 
            cout<<string[i];
    }
}