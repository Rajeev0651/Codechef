#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,M,min,max,rem,x,ans=-1,edges,res;
		double maxd,degree,n;
		cin>>N>>M; n = N;
		min = N-1;	max = (N+(N*(N-1))*0.5);
		if(M<min || M>max)
			{cout<<"-1\n";continue;}
		if(N<=2)
		{
			if(N==1 && M>1){cout<<"-1\n";continue;}
			if(N==1 && M==1){cout<<"1\n";continue;}	
			if(N==1 && M==0){cout<<"0\n";continue;}
			if(N==2 && M==0){cout<<"-1\n";continue;}
			if(N==2 && M==1){cout<<"1\n";continue;}
			if(N==2 && M>=2 && M<=3){cout<<"2\n";continue;}
			if(N==2 && M>3){cout<<"-1\n";continue;}
		}	
		if(M==N-1)
		{cout<<"2\n"; continue;}
		if(M>(N-1) && M<=(N+1))
		{cout<<"2\n";continue;}
		if(M>(N+1) && M<=(N*2)-1)
		{cout<<"3\n";continue;}
		rem = M-N;
		degree = rem*2;
		maxd = ceil(degree/n);	
		cout<<maxd+1<<"\n";
	}
	return 0;
}
