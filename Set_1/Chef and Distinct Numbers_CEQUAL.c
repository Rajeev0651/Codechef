#include<stdio.h>
#include<stdlib.h>
int cmpf(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,flag=0;
		scanf("%d",&N);
		int A[N];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		qsort(A, N, sizeof(int), cmpf);
		for(i=0; i<N-1; i++)
		{
			if(A[i]==A[i+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Yes\n");
		else
		printf("No\n");	
	}
	return 0;
}
