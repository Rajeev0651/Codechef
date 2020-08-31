#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);	
}
int findgcd(int arr[], int n)
{
	int result = arr[0];
	for(int i=1; i<n; i++)
	{
		result = gcd(arr[i], result);
	}
	return result;
}
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];		
		}
		if(findgcd(A,N)==1)
			cout<<"0\n";
		else
			cout<<"-1\n";	
	}
	return 0;
	
	
}
