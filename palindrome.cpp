//Palindrome number
#include<stdio.h>
int main()
{
    int r,temp,n;
    int sum=0;

    scanf("%d",&n);
    temp=n;

    //reversing the digits of a number
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("%d\n",sum);
    
    if(sum==n)
    {
        printf("Palindrome\n");
    }
    else 
        printf("Not palindrome\n");
}