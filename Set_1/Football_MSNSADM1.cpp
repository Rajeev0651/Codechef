#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,c,max = -1;
		cin>>N;
		int A[N],B[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<N; i++)
			cin>>B[i];
		for(int i=0; i<N; i++)
		{
			A[i]*=20;
			B[i]*=10;
		}
		for(int i=0; i<N; i++)
		{
			A[i] = A[i]-B[i];
			if(A[i]<0)
				A[i] = 0;
			if(A[i]>max)
				max = A[i];		
		}
		cout<<max<<"\n";	
	}
	return 0;
}
