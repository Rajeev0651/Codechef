#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,x=0,k=0,flag=0;
		cin>>N;
		int A[N]={0},B[N]={0};
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=N-1; i>=0; i--)
		{
			if(A[i]!=A[i-1])
			{
				if(flag==1)
				{
					B[i] = x-k;
					flag=0;
				}
				else
				{
					B[i] = x;
					flag=0;
				}
				k=0;	
			}
			else if(A[i]==A[i-1])
			{
				B[i] = x-k;
				k++;
				flag=1;	
			}	
			x++;
		}
		for(int i=0; i<N; i++)
		{
			cout<<B[i]<<" ";	
		}
		cout<<"\n";	
	}
	return 0;
}
