#include<stdio.h>
#include<math.h>
int isPrime(long long int N);
int isPrime(long long int N)
{
	for(long long int i=2; i<=N/2; i++)
	{
		if(N%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,x;
		scanf("%lld",&N);
		while(true)
		{
			if(isPrime(N)==1)
			{
				x=N;
				break;	
			}
			N--;
		}
		printf("%lld\n",x);
	}
	return 0;
}
