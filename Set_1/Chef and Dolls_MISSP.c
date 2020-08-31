#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,count=0;
		scanf("%d",&N);
		int A[N];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<N; i++)
		{	for(j=0; j<N; j++)
			{
			if(A[i]==A[j])
			count++;
			}
			if(count%2!=0)
			{
				printf("%d\n",A[i]);
				break;
			}
		}
	}
	return 0;
}
