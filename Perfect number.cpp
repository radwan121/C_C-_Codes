//Perfect Number
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        
    }
    if(sum==n)
    {
        printf("\n\nPerfect Number\n");
    }
    else 
        printf("\n\nNot perfect\n");
}