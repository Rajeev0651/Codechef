#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S1[100],S2[100];
		int i,min=0,max=0;
		scanf("%s",S1);
		scanf("%s",S2);
		for(i=0; i<strlen(S1); i++)
		{
			if(S1[i]!='?' && S2[i]!='?' && S1[i]!=S2[i])
			min++;
			if(S1[i]=='?' || S2[i]=='?')
			max++;
		}
		printf("%d %d\n",min,max+min);
	}
	return 0;
}
