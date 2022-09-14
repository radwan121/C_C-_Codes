//Alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("%c is an alphabet\n",ch);
    }
    else
        printf("Not an alphabet\n");
}