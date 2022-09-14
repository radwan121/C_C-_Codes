//Searching a substring in a main string

#include<stdio.h>
#include<string.h>
int main()
{
    char text[100],substr[30];
    int len_txt,len_sub,i,j;

    //taking strings 

    gets(text);
    gets(substr);

    //Taking length of the strings

    len_txt= strlen(text);
    len_sub= strlen(substr);

    //Searching

    for(i=0; i<len_txt; i++)
    {
        for(j=0; j<len_sub; j++)
        {
            if(text[i+j] == substr[j])
            {
                continue;
            }
            else
                break;
        }
        if(j == len_sub)
        {
            printf("The substring is present from index %d onwards\n",i+1);
        }
    }

    return 0;
}