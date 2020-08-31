#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,count=0;
		scanf("%d",&N);
		char S[N+1];
		scanf("%s",S);
		for(i=N-1; i>0; i--)
		{
			if((S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')&&!(S[i-1]=='a'||S[i-1]=='e'||S[i-1]=='i'||S[i-1]=='o'||S[i-1]=='u'))
			count++;
		}
		printf("%d\n",count);
	}
}
