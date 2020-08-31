#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,Q,B[100001]={0};
		cin>>N>>Q;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i]; B[A[i]]++;
		}
		sort(B, B+100001, greater<int>());
		int C[100001]={0};
		int x = 0,y;
		for(int i=0; i<=100000; i++)
		{	if(B[i]==0)
			{
				C[i] = C[i-1];continue;
			}
			C[i] = B[i]+x;
			x = C[i];
		}
		for(int i=1; i<=Q; i++)
		{
			cin>>y;
			cout<<C[y-1]<<"\n";
		}
	}
	return 0;
}
