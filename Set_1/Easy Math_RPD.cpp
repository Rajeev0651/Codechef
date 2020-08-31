#include<bits/stdc++.h>
using namespace std;
int sum(int x)
{
	int r,a,s=0;
	a = x;
	while(a)
	{
		r = a%10;
		s+=r;
		a/=10;
	}
	return s;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,max=-1,k=-1,mul;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<N-1; i++)
		{
			for(int j=i+1; j<N; j++)
			{
				mul = A[i]*A[j];
				k = sum(mul);
				if(k>max)
					max = k;
			}	
		}
		cout<<max<<"\n";	
	}
	return 0;
}
