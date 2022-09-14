//reordering list of string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char string[100],temp;
	int i,j,len;

	gets(string);
	len=strlen(string);

	//displaying the orginal string
	printf("Original string: %s\n",string);

	//reordering
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(string[i]>string[j])
			{
				temp=string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		}
	}

	//printing the sorted string
	printf("Sorted string: %s\n",string);
}