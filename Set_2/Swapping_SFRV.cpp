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
		int A[N],diff[N+10];
		for(int i=0; i<N; i++)
			{
				cin>>A[i];
			}
		for(int i=0; i<N-1; i++)
		{
			diff[i] = A[i]-A[i+1];
		}	
		for(int i=0; i<N-1; i++)
		{
			if(diff[i]>diff[i+1])
			{
				swap(A[i],A[i+1]);
				i++;
			}
			else
			{
				swap(A[i+1],A[i+2]);
				i+=2;
			}
		}
		for(int i=0; i<N; i++)
		{
			cout<<A[i]<<"\t";
		}
			cout<<"\n";
	}
	return 0;
}
