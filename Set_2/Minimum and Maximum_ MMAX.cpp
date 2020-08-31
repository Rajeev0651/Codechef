#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,min_a,b,i,j,K,sum1=0,sum2=0,sum=0;
		scanf("%ld%ld",&N,&K);
	    int A[100009]={0};
		long int c=0,d=N-1,x=0,one,two,op=0,tp=0;
		min_a = K/N;
		if(min_a>0)
		{	for(i=0; i<N; i++)
			A[i] = min_a;
		}
		b = min_a*N;
		b = K-b;
		for(i=0; i<N; i++)
		{
			if(b<=0)
			break;
			A[i]++;
			b--;
		}
		one = A[0]; two = A[N-1];
		for(i=0; i<N; i++)
		{
			if(A[i]==one)
			op++;
			else if(A[i]==two)
			tp++;
		}
	    if(op>tp && tp!=0)
	    {
	    	sum = tp*2;
		}
		else if(op>tp && tp==0)
		{
			sum = 0;
		}
		else if(op==tp)
		{
			sum = tp*2-1;
		}
		else if(op<tp && op!=0)
		{
			sum = op*2;
		}
		else if(op<tp && op==0)
		{
			sum = 0;
		}
		printf("%ld\n",sum);
	}
	return 0;
}
