#include<bits/stdc++.h>
using namespace std;
long long int dp[10005][10005];
long long int A[1000009];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int N,t=1,right,left,X,add=1,count1,count2,a,b,c,ans=0,p=1;
		cin>>N;
		X = N;
		for(int i=1; i<=N; i++)
			cin>>A[i];
		for(int i=1; i<=N; i++)
			dp[i][i] = A[i];
		while(--X)
		{	
			for(int j=1; j<=X; j++)
			{
					dp[j][j+p] = dp[j][j]^dp[j+1][j+p];
			}
			p++;	
		}
	/*	for(int i=1; i<=N; i++)
		{	t = 0;
			for(int j=i; j<=N; j++)
			{	
				for(int k=i; k<=j; k++)
				{
					t^=cp[j][k];
				}
				cp[i][j] = t;
				cp[j][i] = t;
			}
		}*/
	/*	for(int i=1; i<=N; i++)
		{
			for(int j=1; j<=N; j++)
			{
				cout<<cp[i][j]<<"||"<<dp[i][j]<<" ";
			}
			cout<<endl;
		}cout<<endl;*/
		X = N-1;add=0;count1=1;
		while(X--)
		{	
			for(int i=1; i<=N-1; i++)
			{	a = dp[count1][i];
				count2 = i+1;
				if(i<count1)
					continue;
				for(int j=0; j<=N; j++)
				{
					b = dp[count2][count2+j];
					if(count2+j<count2 || count2+j>N)
						continue;
					if(a==b && count2+j<=N && i>=count1 && count2+j>=count2)
						{
						//	cout<<count1<<","<<i<<"|"<<count2<<","<<count2+j<<endl;
							ans++;	
						}	
				}		
			}
			count1++;		
		}
		cout<<ans<<"\n";
	}
	return 0;
}
