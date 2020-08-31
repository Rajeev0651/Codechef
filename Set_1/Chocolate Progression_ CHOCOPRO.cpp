#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,flag=0;
		float x,min,div,C;
		cin>>C>>N;
		for(int i=1; i<=1000000; i++)
		{
			min = (N*i)/2;
			div = N;
			x = (C-min)/div;
			cout<<x<<"\n";
			if(x==(int)x)
			{
				cout<<"Y"<<" "<<i<<"\n";
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"N\n";
	}
	return 0;
}
