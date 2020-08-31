#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		char S[105],R[105];
		int i,one1=0,zero1=0,one2=0,zero2=0;
		scanf("%s",S);	
		scanf("%s",R);
		for(i=0; i<N; i++)
		{
			if(S[i]=='0')
			zero1++;
			else if(S[i]=='1')
			one1++;
			if(R[i]=='0')
			zero2++;
			else if(R[i]=='1')
			one2++;	
		}
		if(one1==one2 && zero1 == zero2)
		printf("YES\n");
		else 
		printf("NO\n");		
	}
	return 0;
}
