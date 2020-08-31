#include <bits/stdc++.h>
using namespace std;
void fun(int x)
{
	for(int i=1; i<=x; i++)
	{
		cout<<x;
	}
	cout<<"\n";
}
int main(){
	int n,k,l;
	cin >> n;
	k = 0;l=0;
	for(int i=n; i>=1; i--)
	{	
		for(int i=1,j=n; i<=k; i++)
		{
			cout<<j--;
		}
		k++;
		fun(i);
	}
	return 0;
}
