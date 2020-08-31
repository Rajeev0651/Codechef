#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		int A[N],B[M],C[100009]={0},D[N+5];
		for(int i=1; i<=N; i++)
		{
			cin>>A[i];
		}
		for(int i=1; i<=M; i++)
		{
			cin>>B[i];
			C[B[i]]=1;
		}
		for(int i=1; i<=N; i++)
		{
			if(C[A[i]]!=1)
			{
				cout<<A[i]<<" ";
			}
		}
		for(int i=1; i<=N; i++)
		{
			if(C[A[i]]==1)
			{
				cout<<A[i]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
