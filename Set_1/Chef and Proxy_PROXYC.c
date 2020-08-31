#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		double percentage,min;
		int D,i,pres=0,res,diff,present=0;
		scanf("%d",&D);
		char S[D];
		scanf("%s",S);
		for(i=0; i<strlen(S); i++)
		{
			if(S[i]=='P')
			present++;
		}
		min = (75*strlen(S));
		min = min/100;
		min = ceil(min);
		res = (int)min;
		diff = res - present;
	//	dif = (int)diff;
	//	printf("%d\n",diff);
		for(i=2; i<strlen(S)-2; i++)
		{
			if(diff<=0 || strlen(S)<=4)break;
			if((S[i-2]=='P'||S[i-1]=='P')&&(S[i+1]=='P'||S[i+2]=='P')&&(S[i]=='A'))
			{
				diff--;
				pres++;
			}
		}
		if(diff<=0)
		{
			printf("%d\n",pres);
		}
		else
		printf("-1\n");
	}
}
