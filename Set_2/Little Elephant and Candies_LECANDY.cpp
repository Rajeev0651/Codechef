#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,C,sum=0;
		cin>>N>>C;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i]; sum+=A[i];
		}
		if(sum<=C)
			cout<<"Yes\n";
		else	cout<<"No\n";	
	}
	return 0;
}
