#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,min_len=205,index,j,k,count=0,flag;
		int alphabet[30]={0};
		scanf("%d",&N);
		char S[N][200];
		for(i=0; i<N; i++)
		{
			scanf("%s",S[i]);
			if(strlen(S[i])<=min_len)
		{
			min_len=strlen(S[i]);
			index=i;
		}
		}
		for(i=0; i<min_len; i++)
		{	flag=0;
			for(j=0; j<N; j++)
			{
				for(k=0; k<strlen(S[j]); k++)
				{
					if(S[index][i]==S[j][k])
					break;
					if(k==(strlen(S[j])-1))
					{flag=1;
					break;
					}
				}
				if(flag==1)
				break;
				if(j==N-1 && alphabet[S[index][i]-97]==0)
				{	count++;
					alphabet[S[index][i]-97]=1;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
