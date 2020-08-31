	#include<stdio.h>
	int main()
	{
		int T;
		scanf("%d",&T);
		while(T--)
		{
			int i,N,M,K,ti=0,uu=0;
			scanf("%d%d%d",&N,&M,&K);
			int A[M+1],B[K+1],C[1000]={0};
			for(i=1; i<=M; i++)
			{
				scanf("%d",&A[i]);
				C[A[i]]++;		
			}
			for(i=1; i<=K; i++)
			{
				scanf("%d",&B[i]);
				C[B[i]]++;
			}		
			for(i=1; i<=N; i++)
			{
				if(C[i]==0)
					uu++;
				if(C[i]==2)
					ti++;
			}
			printf("%d %d\n",ti,uu);
		}
		return 0 ;
	}
