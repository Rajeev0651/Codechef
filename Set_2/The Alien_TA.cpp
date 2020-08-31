#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,p,y,q;
	float a,b;
	cin>>x>>p>>y>>q;
	for(int i=0; i<=1000000; i++)
	{
		a = (q-p)+(i*y);
		if(a%x==0)
			{
				b = a*x;
				cout<<b<<"\n";	
			}		
	}
	cout<<"-1\n";
	return 0;
}
