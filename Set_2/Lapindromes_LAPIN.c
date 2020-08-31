#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,start,end,freq1[30]={0},freq2[30]={0},flag=1;
		char S[1000];
		scanf("%s",S);
		if(strlen(S)%2==0)
		{
			start = strlen(S)/2;
			end = (strlen(S)/2)-1;
		}
		else{
			start = (strlen(S)/2)+1;
			end = (strlen(S)/2)-1;
		}
		for(i=0; i<=end; i++)
		{
			freq1[S[i]-97]++;
		}
		for(i=start; i<strlen(S); i++)
		{
			freq2[S[i]-97]++;
		}
		for(i=0; i<26; i++)
		{
			if(freq1[i]!=freq2[i])
			{	flag=0;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
}
