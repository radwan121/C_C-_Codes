//Factorial of a number
#include<stdio.h>
int main()
{
    int fac=1,i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fac=fac*i;
    }

    printf("factorial= %d",fac);
}