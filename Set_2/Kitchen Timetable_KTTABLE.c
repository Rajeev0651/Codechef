#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,count=0;
		scanf("%d",&N);
		int A[N+1],B[N];
		A[0]=0;
		for(i=1; i<=N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<N; i++)
		scanf("%d",&B[i]);
		for(i=0,j=0; i<N; i++,j++)
		{
			if(B[i]<=A[j+1]-A[j])
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
