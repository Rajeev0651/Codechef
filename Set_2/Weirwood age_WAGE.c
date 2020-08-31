#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int a,b,x,i,count=0;;
		scanf("%ld%ld%ld",&a,&b,&x);
		for(i=a; i<=b; i=i+x)
		{
			count++;
		}
		printf("%ld\n",count);
	}
	return 0;
}
