#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int X,Y,K,N,rem,flag=0;;
		cin>>X>>Y>>K>>N;
		long int P[N],C[N];
		rem = X-Y;
		for(long int i=0; i<N; i++)
		{
			cin>>P[i]>>C[i];
			if(P[i]>=rem && C[i]<=K)
			{
				flag=1;
			}
		}
		if(flag==1)
			cout<<"LuckyChef\n";
		else if(flag==0)
			cout<<"UnluckyChef\n";		
	}
	return 0;
}
