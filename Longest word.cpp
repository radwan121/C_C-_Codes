#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Cpp is a general purpose of programming language";
    int i,l,letter_count=0;
    string max_word;
    int start_index=0, curr_word_length, length=0;

    l = str.length();
    for(i=0; i<l; i++)
    {
        //Until any null character or space is not encountered
        if(str[i] != ' ')
        {
            letter_count++;
        }
        //If any space or '\0' is encountered
        //End of a word
        else
        {
            //Comapring 
            if(letter_count > length)
            {
                //IF CONDITION IS TRUE THEN STORE THE LENGTH IN length.
                length = letter_count;
                start_index = i - letter_count;     
            }
            letter_count = 0;   
        }
    }
    //MAX WORD STRING IS FOUND BY substr 
    max_word = str.substr(start_index , length);

    //PRINTING THE MAXIMUM WORD
    cout<<max_word<<endl;

}