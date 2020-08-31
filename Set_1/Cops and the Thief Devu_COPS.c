#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int m,x,y,i,j,safe=100;
		scanf("%d%d%d",&m,&x,&y);
		int M[m],d[101]={0},left,right,speed;
		for(i=0; i<m; i++)
		scanf("%d",&M[i]);
		speed=x*y;
		for(i=0; i<m; i++)
		{
			left=M[i]-speed;
			if(left<=0)
			left=1;
			right=M[i]+speed;
			if(right>100)
			right=100;
			for(j=left; j<=right; j++)
			d[j]=1;
		}
		for(i=1; i<=100; i++)
		{
			if(d[i]==1)
			safe--;
		}
		printf("%d\n",safe);
	}
	return 0;
}
