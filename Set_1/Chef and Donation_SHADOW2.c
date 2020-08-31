#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,K,i,j,val,max=0;
		scanf("%d%d",&N,&K);
		int A[N];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<N-K; i++)
		{	val = A[i]^A[i+1];
			for(j=i+2; j<i+K; j++)
			{
				val = val^A[j];	
			}
			if(val>max)
			max = val;
		}
		printf("%d\n",max);
	}
	return 0;
}
