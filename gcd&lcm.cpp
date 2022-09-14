//GCD & LCM
#include<stdio.h>
int main()
{
    int num1,num2,gcd,r,lcm,n1,n2;
    scanf("%d%d",&num1,&num2);

    n1=num1;
    n2=num2;
    if(n1==0)
    {
        gcd=n1;
    }

    else if(n2==0)
    {
        gcd=n2;
    }

    else  
    {
        while(n2!=0)
        {
            r=n1%n2;
            n1=n2;
            n2=r;  
        }
        gcd=n1;
    }
    printf("GCD= %d\n",gcd);

    lcm=(num1*num2)/gcd;

    printf("LCM= %d",lcm);
}