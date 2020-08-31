#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,e=0,p=0;
		scanf("%d",&N);
		int A[N];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<N; i++)
		{
			if(A[i]%2==0)
			e++;
			if(A[i]%2==1)
			{
				p = p+e;
			}
		}
		printf("%d\n",p);
	}
	return 0;
}
