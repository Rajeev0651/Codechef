#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,even=0,odd=0,s1,s2,ans;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
			{
				cin>>A[i];
				if(A[i]%2==0)
					even++;
				else 
					odd++;	
			}
		s1 = (even*(even-1))/2;
		s2 = (odd*(odd-1))/2;	
		ans = s1+s2;
		cout<<ans<<"\n";	
	}
	return 0;
}
