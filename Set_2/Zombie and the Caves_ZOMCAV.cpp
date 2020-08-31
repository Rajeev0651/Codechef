#include<bits/stdc++.h>
using namespace std;
int equal(int arr1[], int arr2[], int n, int m)
{
	if (n != m) 
        return 0;  
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr1[i]]++;  
    for (int i = 0; i < n; i++) { 
        if (mp.find(arr2[i]) == mp.end()) 
            return 0;  
        if (mp[arr2[i]] == 0) 
            return 0; 
        mp[arr2[i]]--; 
    } 
  
    return 1;
}
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
		int N,left,right;
		cin>>N;
		int C[N+1],H[N+1],A[N+1]={0};
		for(int i=0; i<N; i++)
			cin>>C[i];
		for(int j=0; j<N; j++)
			cin>>H[j];
		for(int i=0; i<N; i++)
		{
			left = 	(i-C[i]);
			right = (i+C[i]);
			if(left<0)
				left = 0;
			if(right>=N)
				right = N-1;	
			add(A , N, left, right, 1);
		}
		updateArray(A, N);
		if(equal(A,H,N,N)==1)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";		
	}
	return 0;
}
