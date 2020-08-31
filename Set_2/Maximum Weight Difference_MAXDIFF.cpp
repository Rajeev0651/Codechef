#include<bits/stdc++.h>
using namespace std;
int cmpfnc(const void *a, const void *b)
{
	return(*(int*)a-*(int*)b);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,K,i,j,f=0,diff=0,s1,s2,res,r=0,l=0,g=1;
		scanf("%d%d",&N,&K);
		int A[N];
		for(i=0; i<N; i++)
		{
			scanf("%d",&A[i]);
			f+=A[i];
		}
		qsort(A,N,sizeof(int),cmpfnc);
		for(i=0; i<N; i++)
		{
			if(g<=K)
				r+=A[i];
			g++;		
		}
		s1 = abs(r-(f-r));g=1;r=l=0;
		for(i=N-1; i>=0; i--)
		{
			if(g<=K)
				r+=A[i];
			g++;		
		}
		s2 = abs(r-(f-r));
		res = max(s1,s2);
		printf("%d\n",abs(res));
	}
	return 0;
}

