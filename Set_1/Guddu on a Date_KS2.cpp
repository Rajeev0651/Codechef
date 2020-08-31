#include<stdioh.h>
int checkdigit(long long int temp)
{
	int sum=0;
	while(temp > 0)
	{
		sum = sum + temp % 10;
		temp = temp/10;
	}
	if((sum%10) == 0)
		return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int N,i,j;
		scanf("%lld",&N);
		for(i=1; i<=N; i++)
		{
			if(checkdigit(i))
			printf("%d\n",i);
		}
	}
	return 0;
}
