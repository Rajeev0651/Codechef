#include<bits/stdc++.h>
using namespace std;
int B[1000001];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[N];
		memset(B, 0, sizeof(B[0])*1000001);
		for(int i=0; i<N; i++)
		{	
			cin>>A[i];
			B[A[i]]++;
		}
		if(N%2==0)
		{
			cout<<"-1\n"; continue;
		}else
		{
			for(int i=0; i<N; i++)
			{
				if(B[A[i]]==1)
				{
					cout<<A[i]<<"\n";
					break;	
				}	
			}
		}	
	}
	return 0;
}
