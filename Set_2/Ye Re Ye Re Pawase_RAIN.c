#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,Q,i,j=0;
		scanf("%d%d",&N,&Q);
		int A[N],V[Q];
		for(i=0; i<N; i++)
		scanf("%d",&A[i]);
		for(i=0; i<Q; i++)
		scanf("%d",&V[i]);
		while(Q--)
		{
			int W = V[j],last=0,days=0,sum=0;
			for(i=0; i<N; i++)
			{	
				if(sum + A[i]<=W)
				{//	printf("%d\t",A[i]);
					sum = sum + A[i];
				}
				else
				{	sum = 0; 
				//	printf("\n");
					last = i;
					days++;i--;
				}
			}
			printf("%d %d\n",days,last);
			j++;
		}
	}
	return 0;
}
