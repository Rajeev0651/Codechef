#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,K,a,b,node=0,odd_present=0,x=1,zeros=0;
		cin>>N>>M;
		int freq[N+5]={0};
		int edges[M+5][2];
		for(int i=0; i<M; i++)
		{
			for(int j=0; j<2; j++)
			{
				cin>>edges[i][j];
				freq[edges[i][j]]++;
			}
		}
		a = edges[0][0];
		b = edges[0][1];
		if(M%2==0)
		{
			cout<<"1\n";
			for(int i=1; i<=N; i++)
			{
				cout<<"1 ";
			}
		}
		else
		{
			for(int i=1; i<=N; i++)
			{	if(freq[i]%2==1)
				{	
					odd_present = i;		
				}
			}
			if(odd_present==0)
			{	
				cout<<"3\n";
				for(int i=1; i<=N; i++)
				{
					if(i==a || i==b)
					{
						cout<<x++<<" ";	
					}
					else
						cout<<"3 ";	
				}
			}else
			{
				cout<<"2\n";
				for(int i=1; i<=N; i++)
				{
					if(i==odd_present || freq[i]==0)
					{
						cout<<"2 ";
					}else
					{
						cout<<"1 ";
					}
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
