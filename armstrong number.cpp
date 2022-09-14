//Armstrong number
#include<stdio.h>
#include<math.h>

int power(int b,int e)
    {
        if(e == 0){
            return 1;
     }
        return b*power(b,e-1);
    }

int main()
{
    int n,temp,r,sum=0,val=1,cnt=0;
    scanf("%d",&n);
    temp=n;

    //Checking the number of digits in a number
    while(temp!=0)
    {
        temp=temp/10;
        cnt++;
    }
    
    //process of armstrong
    temp=n;
    for(int i=1; i<=cnt; i++)
    {
        r=temp%10;
        val = power(r,cnt);
        sum=sum+val;
        temp=temp/10;
    }

    printf("Number= %d\n",sum);


    if(sum==n)
    {
        printf("Armstrong Number\n");
    }
    else 
        printf("Not Armstrong\n");

}

