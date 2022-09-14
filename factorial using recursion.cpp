#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    scanf("%d",&n);

    printf("Factorial= %d\n",fact(n));
}

int fact(int x)
{
    int fac=1;

    if(x==0)    
    {
        return 1;
    }
    else
    {
        return (x*fact(x-1));
    }
}