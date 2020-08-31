#include<bits/stdc++.h>
using namespace std;
int M = 1000000007;
int product(long int A[], long int N)
{
	long int ans = 1;
	for(int i=0; i<N; i++)
		ans = ans*((A[i]+1)%M)%M;
	return ans-1;	
}
void divide(long int A[], long int N)
{	long int x=0,res;
	for(long int i=1; i<=sqrt(N); i++)
	{
		if(N%i==0)
		{
			if(N/i == i)
				A[x++] = i;
			else
			{
				A[x++] = i;
				A[x++] = N/i;	
			}	
		}
	}
	res = product(A, x);
	cout<<res%M<<"\n";
}
int main()
{
	long int T;
	cin>>T;
	while(T--)
	{
		long int N,A[100001];
		cin>>N;
		divide(A,N);
	}
}
