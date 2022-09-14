//checking positive or negative
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>=0)
    {
        printf("%d is a positive number\n",n);
    }

    else if(n<=0)
    {
        printf("%d is a negative number\n",n);
    }
    else
        printf("%d is Zero",n);

    return 0;
}