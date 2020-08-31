#include<stdio.h>
long long int gcd(long long int x,long long int y)
{
	if(x==0)
	return y;
	return gcd(y%x, x);
}
long long int arr(long long int a[], long long int l,long long int r)
{
	long long int x = a[l],i;
	for(i=l+1; i<=r; i++)
		x = gcd(a[i],x);
	return x;	
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n,q,i,j,l,r,k,m;
		scanf("%lld%lld",&n,&q);
		long long int a[n+10];
		for(i=0; i<n; i++)
		scanf("%lld",&a[i]);
		for(i=0; i<q; i++)
		{
			scanf("%lld",&j);
			if(j==1)
			{
				scanf("%lld%lld",&l,&r);
				printf("%lld\n",arr(a,l,r));	
			}
			else
			{
				scanf("%lld%lld%lld",&l,&r,&m);
				for(k=l; k<=r; k++)
				a[k] = a[k]*m;
			}
		}
	}
	return 0;
}
