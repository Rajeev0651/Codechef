#include<stdio.h>
#include<stdlib.h>
void right(long long int *p,char I,char F)
{
	if(I=='p' && F=='w' || I=='w' && F=='p')
{
		*p = *p + 1;;}
}
void left(long long int *p,char I,char F)
{
	if(I=='p' && F=='w' || I=='w' && F=='p')
{
		*p = *p + 1;}
}
void up(long long int *p,char I,char F)
{
	if(I=='p' && F=='w' || I=='w' && F=='p')
{
		*p = *p + 1;}
}
void down(long long int *p,char I,char F)
{
	if(I=='p' && F=='w' || I=='w' && F=='p')
{
		*p = *p + 1;}
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,M,i,j,r,c,count=0;
		long int K;
		scanf("%lld%lld%ld",&N,&M,&K);
		printf("XXX\n");
		char** P = new char*[1000000005];
		for(i=0; i<1000000005; i++)
		P[i] = new char[1000000005];
		for(i=0; i<=N+1; i++)
		{
			for(j=0; j<=M+1; j++)
			{
				P[i][j]='w';
			}
		}
		for(i=0; i<K; i++)
		{
			scanf("%lld%lld",&r,&c);
			P[r][c]='p';
		}
	/*	for(i=0; i<=N+1; i++)
		{
			for(j=0; j<=M+1; j++)
			{
				printf("\t%c\t",P[i][j]);
			}
			printf("\n");
		}*/
	//	printf("\n\n");
		for(i=1; i<=N; i++)
		{
			for(j=1; j<=M; j++)
			{
				if(j==1 && i!=1)
				{	
					right(&count,P[i][j],P[i][j+1]);
					down(&count,P[i][j],P[i+1][j]);
					left(&count,P[i][j],P[i][j-1]);
				}
				if(i==1 && j!=1)
				{	
					right(&count,P[i][j],P[i][j+1]);
					down(&count,P[i][j],P[i+1][j]);
					up(&count,P[i][j],P[i-1][j]);
				}
				if(i==1 && j==1)
				{	
					right(&count,P[i][j],P[i][j+1]);
					down(&count,P[i][j],P[i+1][j]);
					up(&count,P[i][j],P[i-1][j]);
					left(&count,P[i][j],P[i][j-1]);
				}
				if(i!=1 && j!=1)
				{	
					right(&count,P[i][j],P[i][j+1]);
					down(&count,P[i][j],P[i+1][j]);
				}
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
