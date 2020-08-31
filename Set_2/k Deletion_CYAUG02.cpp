#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N,K,sum=0,sum1=0,ans=0,first,last,val;
	cin>>N>>K;
	long int A[N+9];
	for(long int i=0; i<N; i++)
	{
		cin>>A[i];
		sum+=A[i];	
	}
	first = 0;
	last = K-1;
	for(long int i=first; i<=last; i++)
		sum1 = sum1+A[i];
	ans = (sum-sum1);	
	for(long int i=1; i<=(N-K); i++)
	{	
		val = sum1-A[first++]+(A[++last]);
		sum1 = val;
		if((sum-val)>(ans))
			ans = sum-val;
	}
	cout<<ans;
	return 0;
}
