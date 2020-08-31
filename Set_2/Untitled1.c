#include<stdio.h>
int f(int a[],int);
int g(int b[],int);
int main()
{
	int T;
	scanf("%"d,&T);
	while(T--)
	{
		int M,K,N,i,a1=0,b1=0;
		scanf("%d%d%d",&N,&M,&K);
		int A[N],B[K];
		for(i=0; i<M; i++)
		scanf("%d",&A[i]);
		for(i=0; i<K; i++)
		scanf("%d",&B[i]);	
		for(i=1; i<=N; i++)
		{
			if(f(A,i,M))
			{
				if(g(A,i,K))
				a1++;
			}
		}
	}
	return 0;
}
int f(int A,int s,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(A[i]==s)
		return 1;
	}
	return 0;
}
