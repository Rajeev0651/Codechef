#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,K,L,R,flag=0,min=0;
		cin>>N>>M>>K>>L>>R;
		int C[N],P[N],V[N]={0},temp;
		for(int i=0; i<N; i++)
			cin>>C[i]>>P[i];
		for(int i=0; i<N; i++)
		{
			if(C[i]<K)
			{
				temp = C[i]+M;
				if(temp>K)
					temp = K;
				if(temp>=L && temp<=R)
					V[i] = 1;	
			}
			if(C[i]>=K)
			{
				temp = C[i]-M;
				if(temp<K)
					temp = K;
				if(temp>=L && temp<=R)
					V[i] = 1;	
			}	
		}
		for(int i=0; i<N; i++)
		{
			if(V[i]==1)
			{
				min = P[i];
				flag=1;
				break;
			}		
		}
		if(flag==1)
		{
			for(int i=0; i<N; i++)
			{
				if(V[i]==1 && P[i]<min)
					min = P[i];
			}
			cout<<min<<"\n";
		}
		else
			cout<<"-1\n";
	}
	return 0;
}
