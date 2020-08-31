#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,i,j=0,k,count=0,right=0,left=0;
		scanf("%ld",&N);
		char S[N],X;
		scanf("%s ",S);
		scanf("%c",&X);	
		for(i=0; i<N; i++)
		{
			if(S[i]==X && j!=0)
			{
				left = i-right-1;
				int inc = right+left+right*left+1;
				count = count+inc;
				right = i;
			}
			else if(S[i]==X && j==0)
			{	j=1;
				right = i;
			}
		}
		for(i=N-1; i>=0; i--)
		{
			if(S[i]==X)
			{
				right = i;
				left = N-right-1;
				int inc = right+left+right*left+1;
				count = count+inc;
				break;
			}
		}
		printf("%ld\n",count);
	}
	return 0;
}



