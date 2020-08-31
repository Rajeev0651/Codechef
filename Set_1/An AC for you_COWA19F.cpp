#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char S[100000];
		cin>>S;
		sort(S, S+strlen(S), greater<char>());
		cout<<S<<"\n";
	}
	return 0;
}
