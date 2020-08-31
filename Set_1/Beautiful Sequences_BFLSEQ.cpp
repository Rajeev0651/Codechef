#include<bits/stdc++.h>
#define ll long long
#define l int
using namespace std;
void combinationUtil(ll arr[], ll n, ll r, ll index, ll data[], ll i, ll P, ll ans[], ll K) 
{ 		ll comb[K],res=0,flag=0;
    if (index == r) { 
        for (ll j = 0; j < r; j++) 
        {
        	comb[res++] = data[j];
        //	printf("%d ", data[j]); 
		}
	//	printf("\n"); 
		for(ll i=1; i<res; i++)
		{
			if(abs(comb[i]-comb[i-1])>P)
			{	flag=1;
				break;
			}
		}
		if(flag==0)
			ans[0]++;
        return; 
    } 
    if (i >= n) 
        return; 
    data[index] = arr[i]; 
    combinationUtil(arr, n, r, index + 1, data, i + 1, P, ans, K); 
    combinationUtil(arr, n, r, index, data, i + 1, P, ans, K); 
}
void printCombination(ll arr[], ll n, ll r, ll P, ll ans[], ll K) 
{
    ll data[r];
    combinationUtil(arr, n, r, 0, data, 0, P, ans, K); 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,P,K,X[1]={0};
		cin>>N>>K>>P;
		ll A[N];
		for(ll i=0; i<N; i++)
			cin>>A[i];
		sort(A, A+N);	
		printCombination(A, N, K, P, X, K);
		cout<<X[0]<<"\n";	
	}
	return 0;
}
