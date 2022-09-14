//Case conversion of a string

#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int len_txt,i;

    //Taking string
    gets(text);

    //Taking length
    len_txt= strlen(text);

    //conversion
    for(i=0; i<len_txt; i++)
    {
        if((text[i]> ='a') && (text[i]<='z'))
        { 
            text[i] = text[i]+'A'-'a';
        }
    }

    printf("After converting:\n%s\n",text);
}