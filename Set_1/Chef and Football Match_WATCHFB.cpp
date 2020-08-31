#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,flag=0;
		cin>>N;
		long int C[N],A[N],B[N],a,b;
		for(int i=0; i<N; i++)
		{
			cin>>A[i]>>B[i]>>C[i];
			if(A[i]==1 || B[i]==C[i])
			{
				a = B[i], b = C[i];
				flag=1;
				cout<<"YES\n";
			}
			else
			{
				if(((B[i]>=a && C[i]>=b) && (B[i]>=a && C[i]>=b)) || (flag==0))
				{
					cout<<"NO\n";
					flag=0;
				}
				else
				{
					cout<<"YES\n";
					a = B[i], b = C[i];
					flag=1;
				}
			}
		}
	}
	return 0;
}
