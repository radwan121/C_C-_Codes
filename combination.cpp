#include<stdio.h>
int fact(int z);
int main()
{
    int n,r,nCr;
    scanf("%d%d",&n,&r);

    nCr= fact(n)/(fact(r)*fact(n-r));
    printf("\nnCr= %d",nCr);
}

int fact(int z)
{
    int fac=1,i;

    if (z==0)  
    {
        return 1;
    }
    else 
    {
        for(i=1; i<=z; i++) 
        {
            fac=fac*i;
        }
        return (fac);
    }n
}