#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,max=-1;
		scanf("%d",&N);
		int A[N];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<N; i++)
		{
			if(A[i]>=max)
			max=A[i];
		}
		printf("%d\n",max);
	}
	return 0;
}
