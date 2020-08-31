#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,B,A,i,j,diff,max=0,sum;
		scanf("%d%d%d",&N,&B,&A);
		int K[N];
		for(i=0; i<N; i++)
		scanf("%d",K[i]);
		diff=B-A;
		for(i=0; (i+diff)<N; i++)
		{	sum=0;
			for(j=0; diff>0; j++)
			{
				sum=sum+K[j];	
			}		
		}
	}
}
