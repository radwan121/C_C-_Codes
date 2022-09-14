#include<stdio.h>
int main()
{
	int t,m,n;
	scanf("%d",&t);

	for(int i=1; i<=t; i++)
	{
		scanf("%d%d",&n,&m);

		if(n%m==0)
		{
			printf("YES\n");
		}

		else
		printf("NO\n");
	}
}