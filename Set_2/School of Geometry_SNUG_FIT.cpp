#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,ans=0;
		cin>>N;
		long int A[N],B[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<N; i++)
			cin>>B[i];
		sort(A,A+N);
		sort(B,B+N);
		for(int i=0; i<N; i++)
		{
			ans+=min(A[i],B[i]);
		}		
		cout<<ans<<"\n";
	}
	return 0;
}
