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
		unsigned long long int start = 1;
		for(i=1; i<N; i++)
		{	res = 1;
			res = (res*start)%M;
			res = (res*(i+1))%M;
			res = (res+start)%M;
			res = (res+(i+1))%M;
			start = res;
		}
	printf("%llu\n",start);
	}
	return 0;
}
