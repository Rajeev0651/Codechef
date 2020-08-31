#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,M,K,d,D;
		scanf("%d%d%d",&N,&M,&K);
		d=abs(N-M);
		if((d-K)>0)
		printf("%d\n",d-K);
		else
		printf("0\n");
	}
	return 0;
}
