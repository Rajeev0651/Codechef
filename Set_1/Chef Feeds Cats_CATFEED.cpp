#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,s=0,flag=0,t=1;
		cin>>N>>M; 
		int A[M],B[N+1]={0};
		for(int i=0; i<M; i++)
			cin>>A[i];	
		for(int i=0; i<M; i++)
		{	
			s++;
			B[A[i]]++;
		//	cout<<B[A[i]]<<"\t"<<A[i]<<"\t"<<s<<"\n";
			if(B[A[i]]>t)
			{	//cout<<B[A[i]]<<"\t";
				//cout<<i<<"\n";
				flag=1;
				break;
			}
			if(s==N)
			{
				t++;	
				s=0;
			}	
		}
		if(flag==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}
	return 0;
}
