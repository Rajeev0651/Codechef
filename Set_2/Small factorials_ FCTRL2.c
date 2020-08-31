#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int N,i,res = 1;
		scanf("%llu",&N);
		for(i=1; i<=N; i++)
		{
			res*= i ;
		}
		printf("%llu\n",res);
	}
	return 0;
}
