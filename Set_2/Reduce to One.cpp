#include<iostream>
long int mod = 1000000007;
long long int v[1000005];
using namespace std;
int main()
{
	int T;
	unsigned long long int res=1;
	for(int i=1; i<=1000007; i++)
		{
			res = (res*i)%mod;
			v[i] = res;
		}
	cin>>T;
	while(T--)
	{
		unsigned long long int N;
		cin>>N;
		cout<<v[N+1]-1<<endl;
	}
	return 0;
}
