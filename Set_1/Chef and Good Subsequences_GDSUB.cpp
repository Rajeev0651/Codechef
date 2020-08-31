#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1008][1008];
ll p = 1000000007;
const ll N = 1000001;
ll factorialNumInverse[N + 1];
ll naturalNumInverse[N + 1];
ll fact[N + 1];
void InverseofNumber()
{
    naturalNumInverse[0] = naturalNumInverse[1]=1;
    for(int i=2; i<=N; i++)
        naturalNumInverse[i] = naturalNumInverse[p%i] * (p-p/i)%p;
}
void InverseofFactorial()
{
    factorialNumInverse[0] = factorialNumInverse[1]=1;
    for (ll i=2; i<=N; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i-1])%p;
}
void factorial()
{
    fact[0]=1;
    for (ll i=1; i<=N; i++) {
        fact[i] = (fact[i-1]*i)%p;
    }
}
ll Binomial(ll N, ll R)
{
    ll ans = ((fact[N]*factorialNumInverse[R]) % p*factorialNumInverse[N - R])%p;
    return ans;
}
ll sum(ll n, ll k, ll int a[])
{	ll ans1, ans2;
    if (k == -1) return 1;
    if (n == -1) return 0;
    if (dp[n][k] != -1) return dp[n][k];
    ans1 = (a[n]*(sum(n - 1, k - 1, a)))%p;
    ans2 = sum(n - 1, k, a);
    dp[n][k] = (ans1+ans2)%p;
    return (ans1+ans2)%p;
}
int main()
{
    ll n,k,q=0,flag = 0;
    cin>>n>>k;
	ll arr[n],temp_arr[8001] = {0},freq[1008]={0};
    for(ll i=0;i<n;i++)
    {	cin>>arr[i];
        if(temp_arr[arr[i]] > 0)
    		flag = 1;
        temp_arr[arr[i]]++;
    }
    for(ll i=0;i<8001;i++)
    {	if(temp_arr[i] > 0)
            freq[q++] = temp_arr[i];
    }
    if (flag == 0)
    {
    ll res=0;
    InverseofNumber();
    InverseofFactorial();
    factorial();
    for(ll i=0;i<=k;i++)
        res =(res+Binomial(n,i))%p;
        cout<<res<<"\n";
    }
    else
    {
    	unsigned long long int res=0;
    	memset(dp,-1,sizeof(dp[0][0])*1008*1008);
    	for(long long int i=0;i<k && i<q;i++)
            res = (res+(sum(q-1,i,freq)))%p;
        cout<<((res+1)%p)<<"\n";
    }
    return 0;
}
