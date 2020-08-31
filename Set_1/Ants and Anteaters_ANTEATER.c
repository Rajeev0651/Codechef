#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int R,C,i,j,ant;
		scanf("%d%d",&R,&C);
		char M[R*C+10];
		for(i=1; i<=R*C; i++)
		{
			scanf("%c",&M[i]);
			if(M[i]==10)
			i--;
		}
		while(1)
		{
			for(i=1; i<R*C; i++)
			{	for(j=i+1; j<=R*C; j++)
				{	if(M[i]=='U')
					{	if(M[j]=='D'&&(i%C))
						{
								
						}
					}
				}
			}
		}
	}
	return 0;
}
