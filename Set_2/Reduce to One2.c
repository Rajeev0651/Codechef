#include<stdio.h>
int main()
{
	long int T;
	const unsigned int M = 1000000007;
	unsigned long long res = 1;
	scanf("%ld",&T);
	while(T--)
	{
		unsigned long long int N,i;
		scanf("%llu",&N);
		N = (N+1);
		unsigned long long int X,K,start = N,t1,t2=N;
		if((N)%2==0){
			K = 1;
			X = N;
		}
		else
		{
			K = N;
			X = (K-1)%M;
			start = X;
			t2 = X;
		}
		while(1)
		{
			t1 = X;
			t2 = (t2-2)%M;
			if(t2<2)
			break;
			start = (start*((t1+t2)%M))%M;
			X = (t1+t2)%M;
		}
		start = (start*K)%M;
	printf("%llu\n",start-1);
	}
	return 0;
}
