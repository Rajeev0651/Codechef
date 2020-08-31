#include<stdio.h>
long long int lcm(long long int,long long int);
long long int gcd(long int,long int);
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int N,B,A,K,a1,b1,count1,count2,lc;
		scanf("%ld%ld%ld%ld",&N,&A,&B,&K);
		lc=lcm(A,B);
		count1=(N/A)-(N/lc);
		count2=(N/B)-(N/lc);
		
		
		
		
		if(count1+count2>=K)
		printf("Win\n");
		else
		printf("Lose\n");
	}
	return 0;
}
long long int gcd(long int a, long int b)
{
	if(a==0|| b==0)
	return 0;
	if(a==b)
	return a;
	if(a>b)
	return gcd(a-b, b);
	return gcd(a, b-a);
}
long long int lcm(long long int a, long long int b)
{
	return ((a*b)/gcd(a,b));
}

