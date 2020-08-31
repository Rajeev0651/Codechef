#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int S1,S2,T1,T2,X,time,res;
		scanf("%llu%llu%llu%llu",&S1,&S2,&T1,&T2);
		scanf("%llu",&X);
		if(X>=T2)
		{
			time = pow(2,X-T2);
			res = S2*time;
			printf("%llu\n",res);	
		}
		else if(X<T2)
		{
			time = pow(2,T2-X);
			res = S2/time;
			printf("%llu\n",res);
		}
	}
	return 0;
}
