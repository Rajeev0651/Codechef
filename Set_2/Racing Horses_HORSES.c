#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,min = 1e9,temp,i,j;
		scanf("%ld",&N);
		int A[N];
		for(i=0; i<N; i++)
			scanf("%ld",&A[i]);
		for(i=0; i<N-1; i++)
		{
			for(j=i+1; j<N; j++)
			{
				if(abs(A[i]-A[j])<min)
				min = abs(A[i]-A[j]);
			}
		}
		printf("%ld\n",min);	
	}
	return 0;
}
