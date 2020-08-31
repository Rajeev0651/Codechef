#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,value,min=0,x;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
		}
		cin>>value;
		x = A[value-1];
		for(int i=0; i<N; i++)
		{
			if(A[i]<x)
				min++;	
		}	
		cout<<min+1<<"\n";
	}
	return 0;
}
