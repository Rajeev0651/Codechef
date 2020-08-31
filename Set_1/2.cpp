#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int NL,L,NR,R,sum=0;
		cin>>NL>>L>>NR>>R;
		for(int i = L; i<=R; i++)
		{
			sum+=i;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
