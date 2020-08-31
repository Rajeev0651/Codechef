#include<bits/stdc++.h>
using namespace std;
long int fact(long int X, long int x)
{
	long int a;
	for(int i=1; i<=sqrt(X); i++)
	{
		if(X%i==0)
		{
			if(X/i==i)
				x++;
			else
				x+=2;	
		}
	}
	return x;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int A,B,res,x=0;
		cin>>A>>B;
		if(A==B)
			cout<<"-1\n";
		else{
			res = abs(A-B);
			res = fact(res,x);
			cout<<res<<"\n";	
		}	
	}
	return 0;
}
