#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N,M,K,offer,Q,left,rem;
		cin>>N>>M>>K;
		Q = K/(N+M);
		rem = K%(N+M);
		cout<<Q*N+((N<=rem)?N:rem)<<"\n";
	}
	return 0;	
}
