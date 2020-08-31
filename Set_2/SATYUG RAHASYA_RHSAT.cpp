#include<bits/stdc++.h>
using namespace std;
string S = "";
void append()
{
	for(int i=1; i<=10000; i++)
	{
		S+=to_string(i);
	}
}
int main()
{
	int T,ans=0;
	append();
	cin>>T;
	while(T--)
	{
		int X;
		cin>>X;
		ans+=S[X-1]-'0';
	}
	cout<<S.max_size()<<"\n";
	cout<<ans;
	return 0;
}
