#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,one=0,ans=0;
		cin>>N;
		char A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			if(A[i]=='1')
				one++;
		}
		ans = (one*(one-1))/2;
		ans+=one;
		cout<<ans<<"\n";
	}
	return 0;
}
