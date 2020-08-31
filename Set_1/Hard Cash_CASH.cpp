#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--){
		long long int N,K,rem,index;
		cin>>N>>K;
		long long int A[N];
		for(int i=0;i<N;i++)
			cin>>A[i];
		for(int i=0;i<N-1;i++){
			rem = A[i]%K;
			for(int j=i+1;j<N;j++){
				if(rem==0)
					break;
				else{
					A[j] += rem;
					break;
				}
			}
		}
		long int ans = A[N-1]%K;
		cout<<ans<<"\n";
	}
	return 0;
}
