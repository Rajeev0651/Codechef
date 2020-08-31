#include<stdio.h>
#include<string.h>
int main()
{
	int R;
	scanf("%d",&R);
	while(R--)
	{
		char S[505]={'.'};
		char S1[505]={'.'};
		int i,j,len,S1len=-1,flag=0;
		scanf("%d",&len);
		scanf("%s",S);
		fflush(stdin);
		for(i=0; i<len; i++)
		{
			if(S[i]!='.')
			{
				S1len++;
				S1[S1len]=S[i];
			}
		}
		if(S1[0]=='.')
		{printf("Valid\n");flag=1;
		continue;}
		if(strlen(S1)%2!=0 && flag==0)
		{
			printf("Invalid\n");
			flag=1;
			continue;
		}
		for(i=0,j=1; j<strlen(S1); i+=2,j+=2)
		{
			if(S1[i]!='H' || S1[j]!='T')
			{
				printf("Invalid\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("Valid\n");
		}	
	return 0;
}
