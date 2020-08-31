#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[N];char inf[N], a;
		for(int i=0; i<N; i++)
			cin>>A[i];
		cin>>inf;
		for(int i=1; i<N; i++)
		{
			if(A[i]==-1)
				{
					if(inf[i-1]=='>')
					{
						A[i] = A[i-1]-1;
					}else if(inf[i-1]=='<'){
						A[i] = A[i-1]+1;
					}
					else if(inf[i-1]=='=')
					{
						A[i] = A[i-1];	
					}	
				}	
		}
		for(int i=0; i<N; i++)
		{
			cout<<A[i]<<"\t";	
		}	
	}
	return 0;
}
