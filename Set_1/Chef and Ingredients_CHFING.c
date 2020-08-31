#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int M=1000000007,N,K,diff,a,min1,max1,min2,max2,S,E,res=0,q=0;
		long long int i,j,n,r,a1,b1,c1,d1,e1;
		scanf("%lld%lld",&N,&K);
		N = N%M;
		K = K%M;
		S = K;	E = (N+K-1)%M;
		min1 = S%M;	
		max1 = E%M;
		min2 = (min1 + S)%M;
		max2 = (max1 + E)%M;
		diff = (E - S)%M;
		a = (min2 - max1 - 1)%M;
		n = ((a/diff)+1);
		q = ((n*(2*a+(n-1)*-diff))/2)%M;
		for(i=a; i>0; i=i-diff)
		{	
			res = (res%M + i%M)%M;
	//		printf("%lld ",res);
		}
	//	res = (res + S - 1)%M;
		printf("%lld\n",res);
	}
	return 0;
}
