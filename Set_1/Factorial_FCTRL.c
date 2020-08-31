#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,i,res=0;
		scanf("%lld",&N);
		for(i = 5; N/i>=1; i*=5)
		{
			res+=(N/i);
		}
		printf("%lld\n",res);
	}
	return 0;
}
