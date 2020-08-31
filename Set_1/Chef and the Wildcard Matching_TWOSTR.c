#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char X[10],Y[10],flag=0;
		int i;
		scanf("%s",X);
		scanf("%s",Y);
		for(i=0; i<strlen(X); i++)
		{
			if(X[i]!='?' &&Y[i]!='?' && X[i]!=Y[i])
			flag=1;
		}
		if(flag==1)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}
