#include<bits/stdc++.h>
using namespace std;
int fnc(const void *a, const void *b)
{
	return(*(long int*)b - *(long int*)a);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,Q,X,kill=0;
		cin>>N>>Q;
		long int P[N],S[N];
		for(int i=0; i<N; i++)
			cin>>P[i];
		qsort(P,N,sizeof(int),fnc);	
		while(Q--)
		{	for(long int i=0; i<N; i++)
				S[i] = P[i];
			kill=0;
			cin>>X;
			for(int i=0 ; i<N;)
			{
				if(X>S[i] && S[i]!=0)
				{
					X = 2*(X-S[i]);
					kill++;
					S[i] = 0;
					i = 0;	
				}	
				else i++;
			}
			cout<<kill<<"\n";	
		}	
	}
	return 0;
}
