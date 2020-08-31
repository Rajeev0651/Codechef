#include<bits/stdc++.h>
using namespace std;
# define ll long long 
ll A[1005];
ll dp[1005];
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}  
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0]; 
    for (ll i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  	return result; 
}
ll allPossibleSubset(ll arr[],ll n, ll K)
{
	ll count = pow(2,n),len,gcd1=1,res=0;
	double x,p = K;
	for (ll i = 0; i < count; i++)
	{	len=0;
		for (ll j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
			{
				dp[len++] = arr[j];
			//	cout<<dp[len-1]<<"\t";
			}
		}
	//	cout<<endl;
		gcd1 = findGCD(dp, len);
		x = p/gcd1;
		if(x==(int)x && gcd!=0)
		{
			res++;
		//	cout<<"yes\n";
		}
	}
	return res;
}
int main()
{
	ll N,Q,count,x;
	cin>>N;
	for(ll i=0; i<N; i++)	
		cin>>A[i];	
	cin>>Q;
	while(Q--)
	{	ll res,K;
		cin>>K;
		res = allPossibleSubset(A, N, K);
		if(res==0) res=0;
		else res--;
		cout<<res<<"\n";
	}
	return 0;	
}
