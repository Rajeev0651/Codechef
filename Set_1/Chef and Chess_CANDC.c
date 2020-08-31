#include<stdio.h>
int main()
{
	int T,M = 1000000007;
	scanf("%d",&T);
	while(T--)
	{
		int n,i,j,pair;
		scanf("%d",&n);
		if(n%2==0)
		{
			pair = n%(M);
			pair = pair-1;
		}
		else
		{
			pair = n%(M);
		}
		printf("%d\n",pair);
	}
	return 0;
}
