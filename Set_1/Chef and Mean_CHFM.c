#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,max=100005,i;
		double mean1,mean2,f=0,sum=0.0;
		scanf("%ld",&N);
		long int A[N];
		for(i=0; i<N; i++)
		{
			scanf("%ld",&A[i]);
			sum+=A[i];
		}
	//	printf("%f\n",sum);
		mean1 = sum/N;
		mean1 = floor(1000000000*mean1)/1000000000;
		for(i=0; i<N; i++)
		{
			f = sum-A[i];
			f = floor(1000000000*f)/1000000000;
			mean2 = f/(N-1);
			mean2 = floor(1000000000*mean2)/1000000000;
			if((fabs(mean1==mean2))&&(i<max))
			{
				max = i+1;
			}
		}
		if(max!=100005)
		printf("%ld\n",max);
		else
		printf("Impossible\n");
	}
	return 0;
}
