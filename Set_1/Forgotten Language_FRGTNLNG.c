#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,K,i,j;
		scanf("%d%d",&N,&K);
		char ns[N][6],ks[K][6],a[N];
		for(i=0; i<N; i++)
		scanf("%s",ns[i]);
		while(K--)
		{
		int j;
		scanf("%d",&j);
		for(i=0; i<j; j++)
		scanf("%s",ks[i]);
		for(i=0; i<N; i++)
		{
			for(j=0; j<K; j++)
			{
				if(!strcmp(ns[i],ks[j]))
				a[i]='c';
			}
		}
		}
		for(i=0; i<N; i++)
		{
			if(a[i]=='c')
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}
