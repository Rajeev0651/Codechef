#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int X,i,count=2,a=1,b=2,res=a+b;
		scanf("%lld",&X);
		if(X==1)
		{
			printf("1\n");
			continue;
		}
		if(X==2)
		{
			printf("2\n");
			continue;
		}
		for(i=0;;i++)
		{	count++;
			if(res >= X)
			{
				printf("%lld\n",count);
				break;
			}
			a = b;
			b = res;
			res = a+b;
		}
	}
	return 0;
}
