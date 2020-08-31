#include<bits/stdc++.h>
using namespace std;
#define ll long long
long int M = 1000000007;
ll check(ll N)
{
	if(N>=0)	return N;
	return 0;
}
ll leq(ll N, ll K)
{
	ll count = 0, i = 1,j = N;
	while(i<j)
	{
		if(i*j <= K)
		{
			count+= (j-i);
			i++;
		}
		else j--;
	}
	return count;
}
ll laq(ll S, ll E, ll K)
{
	ll count = 0, i = S,j = E;
	while(i<j)
	{
		if(i*j <= K)
		{
			count+= (j-i);
			i++;
		}
		else j--;
	}
	return count;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll A,B,C,res,z,less_equal=0,count=0,ans=0,all_pair=0,greater1=0,g1=0,g2=0,greater2=0,x=0,a,b;
		ll minm=0, maxm=0,sec_len=0;
		cin>>A>>B>>C;A=A-1;B;C=C-1;
		minm = min(A,C); maxm = max(A,C);
		a = (minm*(minm-1))/2;
		b = (maxm*(maxm-1))/2;
		for(ll k=1; k<=B; k++)
		{ 
			ll z = pow(k,2);
			less_equal = leq(minm, z);
			g1 = (a-less_equal)*2;		greater1 = g1 + minm-k;
		//	cout<<less_equal<<"\t";
			g2 = leq(maxm, z) - less_equal - laq(minm+1, maxm, z);
			z = minm*(maxm-minm);
			greater2 = z - (g2);
		//	cout<<z<<"\t";
		//	cout<<greater1<<"\t"<<greater2<<"\n";
			greater1 = check(greater1); 	greater2 = check(greater2);
			ans+= (greater1+greater2)%M;
		}
		cout<<ans%M<<"\n";
		
	}
	return 0;
}
