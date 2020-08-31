#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,K,a,b,P,Q,x=0;
		cin>>N>>K;
		ll A[N],B[N];
		ll X1[N],X2[N],X3[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			B[i] = A[i];	
		}
		for(int i=0; i<N; i++)
		{	
			a = A[i%N];
			b = A[N-(i%N)-1];
			A[i%N] = a xor b;
			X1[i%N] = A[i%N];
		}
		for(int i=0; i<N; i++)
		{	
			a = A[i%N];
			b = A[N-(i%N)-1];
			A[i%N] = a xor b;
			X2[i%N] = A[i%N];
		}
		for(int i=0; i<N; i++)
		{	
			a = A[i%N];
			b = A[N-(i%N)-1];
			A[i%N] = a xor b;
			X3[i%N] = A[i%N];
		}
		for(int i=0; i<N; i++)
		{
		//	cout<<X2[i]<<" ";
		}
	//	cout<<"\n";
		P = K/N;
		Q = K%N;
	//	cout<<P<<" "<<Q<<"\n";
		if(P>=1)
		{
			if(P%3==1)
			{//	cout<<"X ";
				for(int i=0; i<Q; i++)
				{
					a = X1[i%N];
					b = X1[N-(i%N)-1];
					X1[i%N] = a xor b;
				}
				for(int i=0; i<N; i++)
				{cout<<X1[i]<<" ";}
			}
			else if(P%3==2)
			{//	cout<<"XX ";
				for(int i=0; i<Q; i++)
				{
					a = X2[i%N];
					b = X2[N-(i%N)-1];
					X2[i%N] = a xor b;
				}
				for(int i=0; i<N; i++)
				{cout<<X2[i]<<" ";}
			}
			else if(P%3==0)
			{//	cout<<"XXX ";
				for(int i=0; i<Q; i++)
				{
					a = X3[i%N];
					b = X3[N-(i%N)-1];
					X3[i%N] = a xor b;
				//	cout<<a<<"\t"<<b<<"\n";
				}
				for(int i=0; i<N; i++)
				{cout<<X3[i]<<" ";}
			}
		}
		else
		{
			for(int i=0; i<K; i++)
			{	
				a = B[i%N];
				b = B[N-(i%N)-1];
				B[i%N] = a xor b;
			}
			for(int i=0; i<N; i++)
			{
				cout<<B[i]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
