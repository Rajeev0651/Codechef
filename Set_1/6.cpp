#include<bits/stdc++.h>
using namespace std;
#define ll long int
int val[401]={0};
ll aftercheck(ll m, ll y)
{
	if(m<=2)
		return y;
	return y+1;			
}
ll beforecheck(ll m, ll y)
{
	if(m>=2)
		return y;
	return y-1;			
}
ll get(ll y1, ll y2)
{
	ll div,imv,diff,loc,ans=0;
	ll a,b;
	div = y1/400;
	imv = 400*div;
	diff = y1-imv;
	loc = diff;
	diff = y2-y1+1;
//	cout<<diff<<" "<<loc<<"\n";
	for(ll i=loc; i<=400; i++)
	{
		if(diff==0)
			break;
		if(val[i]==1)
			ans++;
		diff--;		
	}
//	cout<<ans<<" "<<diff<<"\n";
	a = diff/400;
	b = diff%400;
	ans+=(a*101);
	for(ll i=1; i<=b; i++)
	{
		if(val[i]==1)
			ans++;
	}
	return ans;
}
int main()
{	
	int one[102] = {3,9,14,15,20,25,26,31,37,42,43,48,53,54,59,65,70,71,76,81,82,87,93,98,99,
				 105,110,111,116,121,122,127,133,138,139,144,149,150,155,161,166,167,172,
				 177,178,183,189,194,195,200,201,206,207,212,217,218,223,229,234,235,240,
				 245,246,251,257,262,263,268,273,274,279,285,290,291,296,302,303,308,
				 313,314,319,325,330,331,336,341,342,347,353,358,359,364,369,370,375,
				 381,386,387,392,397,398};
	int l=0;
	for(int i=1; i<=101; i++)
	{
		val[one[l++]]++;
	}				 
/*	for(int i=1; i<=400; i++)
	{
	//	if(val[i]==1)
			cout<<i<<"\t"<<val[i]<<"\n";
	}*/
	int T;
	cin>>T;
	while(T--)
	{
		ll m1,m2,y1,y2,res;
		cin>>m1>>y1>>m2>>y2;
		y1 = aftercheck(m1,y1);
		y2 = beforecheck(m2,y2);
		if(y2>=y1)
		{
			res = get(y1,y2);
			cout<<res<<"\n";
		}
		else
			cout<<"0\n";
	}
    return 0;
}
