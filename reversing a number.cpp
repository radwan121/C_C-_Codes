//Reversing a number
#include<stdio.h>
int main()
{
    int r,n,temp;
    int sum=0;
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("%d",sum);
}