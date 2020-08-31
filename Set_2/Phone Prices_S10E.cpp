#include<bits/stdc++.h>
using namespace std;
int sol(int A[],int low,int high,int cmp)
{	if(low<0)
		low=0;
	for(int i=low;i<=high;i++)
	{
		if(A[i]<=cmp)
			return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,min,count=1;
		cin>>N;
		int A[N];
		for(int i=0;i<N;i++)
			cin>>A[i];
		for(int i=1;i<N;i++)
		{
		 	if(sol(A,i-5,i-1,A[i]))	
		 		count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
