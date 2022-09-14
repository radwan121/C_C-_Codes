 //Sorting out the array elements

#include<stdio.h>
void rearrange(int n, int arr[]);
int main()
{
	int n,i;
	//taking the size of the array
	scanf("%d",&n);

	int arr[n];
	//taking input of the array
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	//displaying the inputed array elements
	printf("Original: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	rearrange(n,arr);

	printf("Sorted: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}

void rearrange(int n, int arr[])
{
	int j,k,temp; 
	for(j=0; j<n; j++)
	{
		for(k=j+1; k<n; k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
	return;
}