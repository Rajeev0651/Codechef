#include<bits/stdc++.h>
using namespace std; 
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
		char first[N-N/2+10][M/2+10];	char second[N-N/2+10][M-M/2+10];
		char third[N/2+10][M/2+10]		char fourth[N-N/2+10][M-M/2+10];
		for(i=0; i<=N-N/2+1; i++)
		{	for(j=0; j<=M/2+1; j++)
			{first[i][j]='w';}
		}
			for(i=0; i<=N-N/2+1; i++)
			{	for(j=0; j<=M-M/2+1; j++)
				{second[i][j]='w';}
			}
				for(i=0; i<=N/2+1; i++)
				{	for(j=0; j<=M/2+1; j++)
					{third[i][j]='w';}
				}
					for(i=0; i<=N-N/2+1; i++)
					{	for(j=0; j<=M-M/2+1; j++)
						{fourth[i][j]='w';}
					}
		
		for(i=0; i<K; i++)
		{
			scanf("%lld%lld",&r,&c);
			if(r>=1 && r<=(N-N/2) && c>=1 && c<=(M-M/2))
			{	first[r][c] = 'p';
				continue;}
			if(r>=1 && r<=M && c>(M-M/2 && c<=M))	
			{	second[r][c] = 'p';
				continue;}
			if(r>(N-N/2) && r<=N && c>=1 && c<=(M-M/2))	
			{	third[r][c] = 'p';
				continue;}
			if(r>(N-N/2) && r<=N && c>(M-M/2) && c<=M)
			{	fourth[r][c] = 'p';
				continue;}					
		}
	
	for	(i=N-/2; i<=)
	
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
