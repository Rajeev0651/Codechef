#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll arr[10000000]={0};
void add(ll arr[], ll N, ll lo, ll hi, ll val) 
{
    arr[lo] += val; 
    if (hi != N - 1) 
       arr[hi + 1] -= val; 
} 
 
void updateArray(ll arr[], ll N) 
{ 
    
    for (ll i = 1; i < N; i++) 
        arr[i] += arr[i - 1]; 
}
bool findPartiion (ll arr[], ll n) 
{ 
    ll sum = 0; 
    ll i, j; 
    for (i = 0; i < n; i++) 
      sum += arr[i]; 
      
    if (sum%2 != 0)   
       return false; 
    bool part[sum/2+1][n+1];
    for (i = 0; i <= n; i++) 
      part[0][i] = true; 
    for (i = 1; i <= sum/2; i++) 
      part[i][0] = false;        
     for (i = 1; i <= sum/2; i++)   
     { 
       for (j = 1; j <= n; j++)   
       { 
         part[i][j] = part[i][j-1]; 
         if (i >= arr[j-1]) 
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
       }         
     }     
     return part[sum/2][n]; 
} 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll A,B,C,N,x,a1=0,b1=0,c1=0,a2=0,b2=0,c2=0;
		cin>>A>>B>>C;
		N = A+B+C;
		if(N>=2)
		{
			add(arr, N, 0, A-1, 1);	
			add(arr, N, A, (A+B-1), 2);	
			add(arr, N, (A+B), A+B+C-1, 3);	
			updateArray(arr, N);
			if (findPartiion(arr, N) == true) 
     			cout<<"YES\n"; 
  			else
     			cout<<"NO\n";		
		}
		else
			cout<<"NO\n";	
	}
	return 0;
}
