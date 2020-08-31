#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
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
  	if(num>1000000000000 || num<0)
  		return -1;
    returion num; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,base=0,value,flag=0,i_value,minv,count=0,x=0,ex=0;
		cin>>N;
		ll B[N]; char Y[N][45];
		for(ll i=0; i<N; i++)
		{
			cin>>B[i];
			cin>>Y[i];
			if(B[i]!=-1 && flag==0) 
			{
				value = toDeci(Y[i], B[i]);
				flag++;
			}		
		}
		if(value==-1)
		{
			cout<<"-1\n";
			continue;
		}
		for(int i=0; i<N; i++)
		{	if(B[i]!=-1)
			{	i_value = toDeci(Y[i], B[i]);
				if(i_value==value)
				{count++;}
				else
				{ex=1;break;}
			}
		}
		if(ex==1)
		{cout<<"-1\n";continue;}
		for(ll i=0; i<N; i++)
		{
			for(ll j=2; j<=36; j++)
			{
				if(B[i]==-1)
				{
					i_value = toDeci(Y[i], j);
					{
						if(i_value==value)
						{
							count++;
							break;
						}
					}
				}
			}
		}
		if(count==N)
		{
			cout<<value<<"\n";	
		}
		else cout<<"-1\n";
	}
	return 0;
}
