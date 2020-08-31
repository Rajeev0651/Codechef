#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,a=0,b=0,x=0,y=0,min,c;
		cin>>N;
		char A[N][N];
		int diff[N];
		for(int i=0; i<N; i++)
		{	for(int j=0; j<N; j++)
				cin>>A[i][j];	
		}
		for(int i=0; i<N; i++)
		{	a=0;b=0;
			for(int j=0; j<N; j++)
			{
				if(j<=ceil(N/2))
					a = a + (A[i][j]-48);
				else if(j>ceil(N/2))
					b = b + (A[i][j]-48);			
			}
			diff[i] = abs(a-b);
		}
		for(int i=0; i<N; i++)
			cout<<diff[i]<<"\n";
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<=N/2; j++)
			{
				x+=(A[i][j]-48);
			}	
		}
		for(int i=0; i<N; i++)
		{
			for(int j=(N/2)+1; j<N; j++)
			{
				y+=(A[i][j]-48);
			}	
		}
		min = abs(x-y);
		for(int i=0; i<N; i++)
		{
			c = abs(min-diff[i]);
			if(c<min)
				min = c;	
		}		
	//	cout<<c<<"\n";
	}
	return 0;
}
