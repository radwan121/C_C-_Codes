 //Fibonacci Series
 #include<stdio.h>
int main()
{
    int first=0,second=1,fibo,cnt=0,n;
    scanf("%d",&n); //taking a number 

    while(cnt<=n)
    {
        if(cnt<=1)
        {
            fibo=cnt;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        cnt++;
    }
}
