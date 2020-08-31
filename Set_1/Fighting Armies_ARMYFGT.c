#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,i,j,count=0;
		scanf("%lld",&N);
		long long int Rebel[N],l,u;
		for(i=0; i<N; i++)
		scanf("%lld",&Rebel[i]);
		scanf("%lld%lld",&l,&u);
		for(i=0; i<N; i++)
		{
			for(j=l; j<=u; j++)
			{
				if(Rebel[i]%j!=0)
				{
					count++;
					break;
				}
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
