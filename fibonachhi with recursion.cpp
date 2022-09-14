#include<stdio.h>
int fibo(int x);
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",fibo(i));
    }
}

int fibo(int x)
{
    if(x==0)
    {
        return 0;
    }

    else if(x==1)
    {
        return 1;
    }

    else
    {
        return (fibo(x-1)+fibo(x-2));
    }
}