#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (ll)c - '0'; 
    else
        return (ll)c - 'A' + 10; 
} 
ll toDeci(char *str, ll base) 
{ 
    ll len = strlen(str); 
    ll power = 1; 
    ll num = 0; 
    ll i;
    for (i = len - 1; i >= 0; i--) 
    { 
        if (val(str[i]) >= base) 
        { 
           return -1; 
        }
        num += val(str[i]) * power; 
        power = power * base; 
    }
	if(num<0 || num>1000000000000)
    	return -1; 
    return num; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char number[50];
		ll base,res;
		cin>>base>>number;
		res = toDeci(number, base);
		cout<<res<<"\n";
	}
	return 0;
}
