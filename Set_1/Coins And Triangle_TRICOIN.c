#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,x;
		scanf("%d",&N);
		x=0;
		for(i=1;; i++)
		{
			if((x+i)<=N)
			x=x+i;
			else
			break;
		}
		printf("%d\n",i-1);
	}
	return 0;
}
