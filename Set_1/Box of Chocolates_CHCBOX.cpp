#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,maxm=-1,l=-1,r=-1,ans=0,flag=0,diff=0;
		cin>>N;
		int A[N+1];
		for(int i=1; i<=N; i++)
		{
			cin>>A[i];
			maxm = max(maxm,A[i]);	
		}
		for(int i=1; i<=N; i++)
		{
			if(A[i]!=maxm)	diff=1;
			if(A[i]==maxm && l==-1)
				l=i;
			if(A[i]==maxm && l!=-1)
				r=i;		
		}
	//	cout<<l<<" "<<r<<"\n";
		if(r==-1)
			r=l;
		int a=r-l+1,b=(N/2);
		if(a>b && diff==1)
		{
			ans=0;
			flag=1;
		}
		else if(a>b && diff==0)
		{
			ans=N;	
		}	
		else
		{	int ini;
			if(l<=(N/2))
			{
				ini = (N/2)-l;
				r+=ini;
				ans = N-r;
			}
			else
			{
				ans = N-r+1;
			}
		}
		cout<<ans<<"\n";			
	}
	return 0;
}
