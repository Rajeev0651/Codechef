#include<stdio.h>
long int cmpfnc(const void *a, const void *b)
{
	return(*(long int*)a-*(long int*)b);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,K,i,j,f=0,diff=0,s1,s2,res,r=0,l=0,g=1;
		scanf("%ld%ld",&N,&K);
		long int A[N];
		for(i=0; i<N; i++)
		{
			scanf("%ld",&A[i]);
			f = f+A[i];
		}
		qsort(A,N,sizeof(int),cmpfnc);
		for(i=0; i<N; i++)
		{
			if(g<=K)
				r+=A[i];
			else
				l+=A[i];	
		}
		s1 = abs(r-l);g=1;r=l=0;
		for(i=N-1; i>=0; i--)
		{
			if(g<=K)
				r+=A[i];
			else
				l+=A[i];	
		}
		s2 = abs(r-l);
		res = max(s1,s2);
		printf("%ld\n",res);
	}
	return 0;
}

