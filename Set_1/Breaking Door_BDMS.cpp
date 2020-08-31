#include<bits/stdc++.h>
using namespace std;
int main()
{
	int K,d;
	float N;
	cin>>N>>K;
	if(K<=N)
		{
			d = ceil(N/2);
			for(int i=d; i<=10000; i++)
			{
				if(i%K==0)
					{
						cout<<i<<"\n";
						break;
					}
			}
		}
	else cout<<"-1\n";
	return 0;	
}
