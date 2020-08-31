#include<bits/stdc++.h>
using namespace std;
void add(int arr[], int N, int lo, int hi, int val) 
{ 
    arr[lo] += val; 
    if (hi != N - 1) 
       arr[hi + 1] -= val; 
}
void updateArray(int arr[], int N) 
{ 
    for (int i = 1; i < N; i++) 
        arr[i] += arr[i - 1]; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sign=1;
		cin>>N;
		int A[N+1],B[N]={0},up;
		for(int i=0; i<N; i++)	cin>>A[i];
		if(A[0]<0)sign=-1; else sign=1;
		up=0;
		for(int i=1; i<N; i++)
		{
			sign*=-1;
			if((A[i]<0 && sign<0)||(A[i]>=0 && sign>=0))
			{
			/*	for(int j=up; j<i; j++)
				{
					B[j]++;
				}*/
				add(B,N,up,i-1,1);
			}
			else {
				if(A[i]<0)sign=-1; else sign=1;
				up=i;
			}
		}
		updateArray(B,N);
		for(int i=0; i<N; i++)
			cout<<B[i]+1<<" ";
		cout<<"\n";	
	}
	return 0;
}
