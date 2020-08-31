#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int N,i,j,last,X,sum=0,R;
		scanf("%llu",&N);
		last = N%10;
		X = N;
		while(X)
		{
			R = X%10;
			sum = sum+R;
			X = X/10;	
		}
	//	printf("%llu\n",sum);
		switch(sum%10)
		{
			case 0 : last = 0;break;
			case 1 : last = 9;break;
			case 2 : last = 8;break;
			case 3 : last = 7;break;
			case 4 : last = 6;break;
			case 5 : last = 5;break;
			case 6 : last = 4;break;
			case 7 : last = 3;break;
			case 8 : last = 2;break;
			case 9 : last = 1;break;
			default : break;
		}
		printf("%llu%llu\n",N,last);
	}
	return 0;
}
