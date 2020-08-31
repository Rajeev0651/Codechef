#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,S;
	cin>>T>>S;
	while(T--)
	{
		string ans = "YES";
		int N;
		cin>>N;
		long int A[N],B[N],table[N]={0};
		int A_left=N,B_left=N;
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<N; i++)
			cin>>B[i];
		sort(A,A+N);
		sort(B,B+N);
		int att,dev,next,prev,d_pos=0;
		int x,pos=0;
		for(int i=0; i<N; i++)
		{
			if(i==0)
			{	if(B[d_pos]>A[0])
				{	B_left--;
					table[pos++]=B[d_pos++]; }
			else
			{	
				ans = "NO";	break;
			}}
			else
			{
				if(A[i]==A[i-1])
					next = A[i];
				else
				{
					if(binary_search(table,table+pos,A[i]))
						next = A[i];
					else
					{
						ans = "NO";	break;	
					}		
				}
				if(B[d_pos]>next)
				{
					table[pos++] = B[d_pos];
					d_pos++;	
				}
				else
				{
					ans = "NO";	break;	
				}
			}
			if(i==N-1 && (B_left==0))
				break;
		}
	//	cout<<"\n";
	//	for(int i=0; i<N; i++)
	//		cout<<table[i]<<" ";	
		cout<<ans<<"\n";		
	}
	return 0;
}
