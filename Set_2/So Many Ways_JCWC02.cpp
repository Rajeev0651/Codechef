#include<bits/stdc++.h>
using namespace std;
int M = 1000000009;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,odd=0,even=0,pair=0,x,y,ans=0;
		cin>>N;
		for(long int i=1; i<=N; i++)
		{
			cin>>x>>y;
			if(x%2==0)even++;if(x%2==1)odd++;
			if(y%2==0)even++;if(y%2==1)odd++;
			if((x%2==0 && y%2==1)||(x%2==1 && y%2==0))
			{
				pair++;
			}
		}
		ans = (odd*even)%M;
		ans = (ans-pair)%M;
		cout<<ans<<"\n";	
	}	
	return 0;
}
