#include<bits/stdc++.h>
using namespace std;
int N;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int Q,final,a,x=0,b,z,s,e;
		char rl;
		cin>>N>>Q;
		int A[N][N],temp[N];
		for(int i=0; i<N; i++)
		{	for(int j=0; j<N; j++)
			{cin>>A[i][j];}
		}
		while(Q--)
		{	cin>>rl>>a;
			if(rl=='R')	
			{	x+= a;		}
			if(rl=='L')	
			{	x-= a;	}	
		}
		z = x;
		x = abs(x);
		b = x%4;
		if(z>=0)
		{
			if(b==1)
			{
				for(int i=0; i<N; i++)
				{
					for(int j=N-1; j>=0; j--)
						{
							cout<<A[j][i]<<" ";
						}
					cout<<"\n";	
				}
			}
			else if(b==2)
			{
				for(int i=N-1; i>=0; i--)
				{
					for(int j=N-1; j>=0; j--)
						{
							cout<<A[i][j]<<" ";
						}
					cout<<"\n";	
				}
			}
			else if(b==3)
			{
				for(int i=N-1; i>=0; i--)
				{
					for(int j=0; j<N; j++)
						{
							cout<<A[j][i]<<" ";
						}
					cout<<"\n";	
				}
			}
			else
			{
				for(int i=0; i<N; i++)
				{
					for(int j=0; j<N; j++)
						{
							cout<<A[i][j]<<" ";
						}
					cout<<"\n";	
				}	
			}	
		}
		else
		{
			if(b==3)
			{
				for(int i=0; i<N; i++)
				{
					for(int j=N-1; j>=0; j--)
						{
							cout<<A[j][i]<<" ";
						}
					cout<<"\n";	
				}
			}
			else if(b==2)
			{
				for(int i=N-1; i>=0; i--)
				{
					for(int j=N-1; j>=0; j--)
						{
							cout<<A[i][j]<<" ";
						}
					cout<<"\n";	
				}
			}
			else if(b==1)
			{
				for(int i=N-1; i>=0; i--)
				{
					for(int j=0; j<N; j++)
						{
							cout<<A[j][i]<<" ";
						}
					cout<<"\n";	
				}
			}
			else
			{
				for(int i=0; i<N; i++)
				{
					for(int j=0; j<N; j++)
						{
							cout<<A[i][j]<<" ";
						}
					cout<<"\n";	
				}	
			}	
		}	
	}
	return 0;
}
