#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[1000005],A[30]={0};
		int i,max=-1;
		scanf("%s",S);
		for(i=0; i<strlen(S); i++)
		{
			int count;
			count = S[i]-65;
			A[count]++;
			if(A[count]>max)
			max=A[count];
		}
		int c;
		c = strlen(A)-max;
		printf("%d\n",c);
	}
	return 0;
}
