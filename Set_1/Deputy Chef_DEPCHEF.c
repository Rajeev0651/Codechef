#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,max=-1,f,r,l;
		scanf("%d",&N);
		int a[N],d[N];
			for(i=0; i<N; i++)
			scanf("%d",&a[i]);
			for(i=0; i<N; i++)
			scanf("%d",&d[i]);
		for(i=0; i<N; i++)
		{
			r=(i+1)%N;
			if(i==0)
			l=N-1;
			else
			l=i-1;
			f=a[l]+a[r];
			if(f<d[i])
		{	if(d[i]>max)
			max=d[i];
		}
	}	
		printf("%d\n",max);
	}
		return 0;
}
