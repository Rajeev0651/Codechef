#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,i,k,s=0,flag=0;
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
			scanf("%d",&k);
			if(flag==1)
			continue;
			if(k==1)
			s++;
			else
			s--;
			if(s<0)
			{
				printf("Invalid\n");
				flag=1;
			}
		}
		if(s>=0)
		printf("Valid\n");	
	}
	return 0;
}
