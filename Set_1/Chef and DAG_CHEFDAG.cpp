#include<bits/stdc++.h>
using namespace std;
int operate(int arr[501][501], int N, int val)
{
	for(int i=1; i<=N; i++)
	{
		if(arr[val][i]==1)
		{
			for(int j=1; j<=N; j++)
				arr[j][i] = 0;
			return i;		
		}	
	}
	return 0;		
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{	
		int N,K,a,vr;
		cin>>N>>K;
		int A[501][501];
		int freq[501],ans[501];
		memset(ans,0,sizeof(int)*N);
		memset(freq,0,sizeof(int)*N);
		int count=0,x[501][501],order[501];
		for(int i=1; i<=N; i++)
		{	for(int j=1; j<=N; j++)
			{	if(i==j)	
					x[i][j] = 0;
				else		
					x[i][j] = 1;	
			}	
		}
		for(int i=1; i<=N; i++)
			order[i] = i;		
		for(int i=1; i<=K; i++)
			for(int j=1; j<=N; j++)
				cin>>A[i][j];						
		for(int i=1; i<=K; i++)
			for(int j=N; j>=1; j--)
				for(int k=j-1; k>=1; k--)
					x[A[i][j]][A[i][k]]=0;
		for(int i=1; i<=N; i++)
		{	for(int j=1; j<=N; j++)
			{
				if(x[i][j]==1)
					freq[i]++;
			}
		}
		for(int i=1; i<N; i++)
		{	for(int j=i+1; j<=N; j++)
			{	if(freq[j]<freq[i])
				{	swap(freq[i],freq[j]);
					swap(order[i],order[j]);
		}	}	}
		int k;
		for(int i=1; i<=N; i++)
		{	
			if(freq[i]==0) continue;
			k = operate(x,N,order[i]);
			if(k!=-1)
				ans[order[i]] = k;		
		}
		for(int i=1; i<=N; i++)
		{
			if(ans[i]==0)
				count++;	
		}
		cout<<count<<"\n";
		for(int i=1; i<=N; i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
