#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int N,K,f;
		cin>>N>>K;
		if(K<=1000000000)
			f = K*K;
		else {
			cout<<"YES"<<"\n";
			continue;
		}	
		if(N%f==0)
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";	
	}
	return 0;
}
