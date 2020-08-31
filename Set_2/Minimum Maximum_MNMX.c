#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,i,small,cost;
		scanf("%lld",&N);
		long long int A[N];
		for(i=0; i<N; i++)
		scanf("%lld",&A[i]);
		small=A[0];
		for(i=0; i<N; i++)
		{
			if(A[i]<small)
			small=A[i];
		}
		cost=(N-1)*small;
		printf("%lld\n",cost);
	}
	return 0;
}
