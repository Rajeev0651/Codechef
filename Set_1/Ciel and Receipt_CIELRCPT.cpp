#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int p,rem,sum=0,val=11,meal=0,x;
		cin>>p; rem = p;
		while(rem)
		{	
			x = pow(2,val);
			while(rem>=x)
			{
				rem-=pow(2,val);
				meal++;	
			}
			val--;			
		}
		cout<<meal<<"\n";
	}
	return 0;
}
