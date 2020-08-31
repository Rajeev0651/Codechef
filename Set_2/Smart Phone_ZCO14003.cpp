#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll N,sum=-1,val;
	cin>>N;
	ll A[N];
	for(ll i=0; i<N; i++)
		cin>>A[i];
	sort(A, A+N);
	for(ll i=0; i<N; i++)
	{
		val = A[i]*(N-i);
		if(val>sum)
			sum = val;	
	}
	cout<<sum<<"\n";
	return 0;	
}
