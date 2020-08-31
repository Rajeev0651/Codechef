#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,M,i,j,temp,sum=0,count=0;
		scanf("%ld%ld",&N,&M);
		long int D[N+5],V[N+5],day[100000]={0};
		for(i=1; i<=N; i++)
			scanf("%ld%ld",&D[i],&V[i]);
		for(i=1; i<=N; i++)
		{
			for(j=1; j<=N; j++)
			{
				if(V[i]>V[j])
				{
					temp = V[i];
					V[i] = V[j];
					V[j] = temp;
					temp = D[i];
					D[i] = D[j];
					D[j] = temp;
				}
			}	
		}
		for(i=1; i<=N; i++)
		{
			if(day[D[i]]==0)
			{
				sum = sum+V[i];
				day[D[i]]=1;
				count++;
			}
			if(count==2)
			break;
		}
		printf("%ld\n",sum);	
	}
	return 0;
}
