#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		sort(A, A+N);
		cout<<A[0]<<"\n";	
	}
	return 0;
}
