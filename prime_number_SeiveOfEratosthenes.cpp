//OPTIMIZED WAY TO FIND PRIME NUMBERS
//SEIVE OF ERATOSTHENES
#include<bits/stdc++.h>
using namespace std;

void primeSeive(int n)
{
    int arr[10000]={0}; //MAKING ALL VALUES UNMARKED

    for(int i=2; i<=n; i++)
    {
        //arr[i] = 0  means unmarked
        if(arr[i]==0)
        {
            //exam: finding the multiples of 2 and 
            //so we jump everytime by 2 (j+=i)
            for(int j=i*i; j<=n; j+=i)
            {
                //arr[i] = 1  means marked
                arr[j]=1;
            }
        }
    }
    //PRINTING THE UNMARKED ELEMENTS
    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int n;
    cin>>n; 

    primeSeive(n);

    return 0;
}
