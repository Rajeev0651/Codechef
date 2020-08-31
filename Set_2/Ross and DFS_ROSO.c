#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n,t,i,j,node;
		scanf("%lld%lld",&n,&t);
		for(i=0; i<n; i++)
		{
			if(t>=pow(2,i)&&t<pow(2,i+1))
			{
				node = i;
			}
		}
		printf("%lld\n",node);
	}
	return 0;
}
