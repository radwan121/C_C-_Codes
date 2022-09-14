//prime number checking
#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);

    if(n==0||n==1)
    {
        cnt=1;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cnt=1;
            break;
        }
        else 
            cnt=0;
    }

    if(cnt==1)
    {
        printf("Not prime\n");
    }
    else 
        printf("Prime\n");
}
 
