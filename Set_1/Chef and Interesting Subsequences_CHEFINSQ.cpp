#include<bits/stdc++.h>
using namespace std;
long long int binomialCoeff(long long int n, long long int k) 
{ 
    long long int C[k+1]; 
    memset(C, 0, sizeof(C)); 
    C[0] = 1; 
  
    for (long long int i = 1; i <= n; i++) 
    { 
        for (long long int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{	long long int min = 0,x,ans,flag=0,val=0,counts=0,max=-1;
		long long int N,sum=0,K,B[101]={0};
		cin>>N>>K;
		long long int A[N];
		for(long long int i=0; i<N; i++)
			cin>>A[i];
		sort(A,A+N);	
		for(long long int i=0 ;i<K; i++)
			{
				min+=A[i];	
			}
		x = A[K-1];
		for(long long int i=0 ;i<N; i++)
		{
			if(A[i]==x)
				val++;
		}
		for(long long int i=K-1; i<N-1; i++)
		{
			if(A[i]==A[i+1])
				counts++;
			else break;	
		}
	//	cout<<x<<"\t"<<counts<<"\n";
		ans = binomialCoeff(val, counts);	
		cout<<ans<<"\n";		
	}
	return 0;
}
