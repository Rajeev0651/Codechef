#include<bits/stdc++.h>
#define ll long long int
ll divisor[1000005]={0};
using namespace std;
void printDivisors(ll n) 
{  
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        {  
            if (n/i == i) 
            {
            	divisor[i]++; 
			}
            else
			{
				divisor[i]++;
				divisor[n/i]++;	
			}           
        } 
    } 
} 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		for(int i=0; i<1000005; i++)
			divisor[i] = 0;
		ll N,max=0,val;
		cin>>N;
		ll A[N];
		for(ll i=0; i<N; i++)
			cin>>A[i];
		for(ll i=1; i<N; i++)
		{	
			printDivisors(A[i-1]);
			val = divisor[A[i]];
			if(val>max)
				max = val;
		}
		cout<<max<<"\n";
	}
	return 0;
}
