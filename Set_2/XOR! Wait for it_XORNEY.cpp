#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int L,R,i,res=0;
		scanf("%lld%lld",&L,&R);
		for(i=L; i<=R; i++)
		{
			res = res^i;
		}
		if(res%2==0)
			printf("Even\n");
		else 
			printf("Odd\n");		
	}
	return 0;
}
