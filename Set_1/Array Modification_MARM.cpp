#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,K,a,b,P,x=0;
		cin>>N>>K;
		ll A[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<K; i++)
		{	x++;
			a = A[i%N];
			b = A[N-(i%N)-1];
			A[i%N] = a xor b;
			cout<<A[i%N]<<"\t";	
			if(x%N==0)
				cout<<"\n";
		}
		cout<<"\n";		
		for(int i=0; i<N; i++)
		{
			cout<<A[i]<<" ";
		}	
		cout<<"\n";
	}
	return 0;
}
