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
		int N,flag=0,K;
		scanf("%d%d",&N,&K);
		int A[N],i,j,low,mid,high=N;
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		qsort(A, N, sizeof(int), cmpf);
		for(i=0; i<N; i++)
		{ low = i, high = N-1;
			while(low<=high)
			{
				mid = (low+high)/2;
				if(A[i]+A[mid]==K && i!=mid)
				{	
					flag=1;
					break;
				}
				else if(A[i]+A[mid]<K)
				{
					low = mid+1;
				}
				else
				high = mid-1;
			}
			if(flag==1)
			break;
		}
		if(flag==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}

