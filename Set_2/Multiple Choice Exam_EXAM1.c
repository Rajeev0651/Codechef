#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,res=0,i,j;
		char S[N+5],U[N+5];
		scanf("%d",&N);
		scanf("%s%s",S,U);
		for(i=0; i<N; i++)
		{
			if(S[i]==U[i])
			res++;
			if(U[i]=='N')
			continue;
			if(S[i]!=U[i])
			{
				i++;
			}
		}
		printf("%d\n",res);
	}
	return 0;
}
