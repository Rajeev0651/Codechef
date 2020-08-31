#include <bits/stdc++.h>
int lcm(int,int);
int gcd(int,int);
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
		printf("\t%d",count1+count2);
	}
	return 0;
}
int gcd(int a, int b)
{
	if(a==0|| b==0)
	return 0;
	if(a==b)
	return a;
	if(a>b)
	return gcd(a-b, b);
	return gcd(a, b-a);
}
int lcm(int a, int b)
{
	return ((a*b)/gcd(a,b));
}

