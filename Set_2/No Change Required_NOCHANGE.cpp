#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,P,flag=0,loc,flag2=0,a,b,c,d,val1,val2;
		cin>>N>>P;
		int A[N],B[N],ans[N]={0};
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			B[i] = A[i];	
		}
		for(int i=0; i<N; i++)
		{
			if(P%A[i]!=0)
			{
				flag=1;
				loc = i;
				break;	
			}	
		}
		if(flag==1)
		{	cout<<"YES ";
			for(int i=0; i<N; i++)
			{
				if(i==loc)
					cout<<P/A[i]+1<<" ";
				else
					cout<<"0 ";
			}
		}
		else
		{	sort(A, A+N);
			for(int i=0; i<N-1; i++)
			{
				if(A[i+1]%A[i]!=0)
				{
					val1 = A[i];
					val2 = A[i+1];
					a = P/A[i+1]-1;//max freq
					d = P-A[i+1]; 
					b = P-d;
					c = b/A[i]+1; // min freq
					flag2 = 1;
					break;	
				}	
			}
			if(flag2==1)
			{
				cout<<"YES ";
				for(int i=0; i<N; i++)
				{
					if(B[i]==val1)
						cout<<c<<" ";
					else if(B[i]==val2)
						cout<<a<<" ";
					else
						cout<<"0 ";			
				}	
			}
			else
				cout<<"NO ";	
		}
		cout<<"\n";			
	}
	return 0;
}
