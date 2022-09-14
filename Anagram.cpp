//Anagram

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2,cnt=0;
    gets(s1);
    gets(s2);

    l1=strlen(s1);
    l2=strlen(s2);

    if(l1!=l2)
    {
        printf("Not anagram\n");
    }

    else 
    {
        for(int i=0; i<l1; i++)
        {
            for(int j=0; j<l2; j++)
            {
                if(s1[i]==s2[j])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    if(cnt==l1 && cnt==l2)
    {
        printf("Anagram\n");
    }
    else 
        printf("Not anagram\n");

    return 0;
}