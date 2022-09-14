//Leap year
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x%4==0 && x%400==0)
    {
        printf("%d year is leap year\n",x);
    }
    else if(x%100==0)
    {
        printf("%d is not leap year\n",x);
    }
    else
        printf("%d year is not leap year\n");

    return 0;
}