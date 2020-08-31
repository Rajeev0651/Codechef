#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int D,Q,k,day;
		int i,dead,req;
		scanf("%d",&D);
		int d[D],p[D];
		for(i=1; i<=D; i++)
		{
			scanf("%d%d",&d[i],&p[i]);
		}
		scanf("%d",&Q);
		for(i=1; i<=Q; i++)
		{	
		k=1;day=0;
		scanf("%d%d",&dead,&req);
		while(dead>=d[k] && k<=D)
		{
			day=day+p[k];
			k++;
		}
		if(day>=req)
		printf("Go Camp\n");
		else
		printf("Go Sleep\n");
		}
	}
	return 0;
}
