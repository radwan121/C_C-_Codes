#include<stdio.h> 
int main()
{
    int a,b;
    double x=1;
    scanf("%d%d",&a,&b);

    while(b--)
    {
        x=x*a;
    }
    printf("%.lf",x);
}