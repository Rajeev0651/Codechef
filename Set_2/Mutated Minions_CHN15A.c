#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,N,K,count=0;
		scanf("%d%d",&N,&K);
		int A[N];
		for(i=0; i<N; i++)
		{
			scanf("%d",&A[i]);
			A[i]+=K;
			if(A[i]%7==0)
				count++;
		}	
		printf("%d\n",count);		
	}
	return 0;
}
