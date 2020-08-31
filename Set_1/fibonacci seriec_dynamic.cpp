#include<bits/stdc++.h>
using namespace std;
long int rec(int X)
{
	if(X<=1)
		return X;
	return (rec(X-2)+rec(X-1));		
}
int main()
{
	int N;
	cin>>N;
	cout<<rec(N);
	return 0;
}
