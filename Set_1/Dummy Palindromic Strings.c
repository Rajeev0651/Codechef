#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[10005];
		scanf("%s",S);
		int alpha[27]={0},count=0,i;
		for(i=0; i<strlen(S); i++)
		{
			alpha[S[i]-97]++;
		}
		for(i=0; i<27; i++)
		{
			if(alpha[i]%2==1)
			count++;
		}
	//	printf("%d\n",count);
		if((strlen(S)%2)==0)
		{
			if(count==2)
			printf("DPS\n");
			else
			printf("!DPS\n");
		}
		else
		{
			if(count<=3 && count>=1)
			printf("DPS\n");
			else
			printf("!DPS\n");
		}
	}
	return 0;
}
