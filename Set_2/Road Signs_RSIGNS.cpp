#include<stdio.h>
#include<math.h>
unsigned long long int power(int x, unsigned long long int y) 
{ 	unsigned long long int M;
    unsigned long long int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2)%1000000007; 
    if (y%2 == 0) 
        return (temp*temp)%1000000007; 
    else
    {
    	M = (x*temp)%1000000007;
    	return (M*temp)%1000000007;
	}
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int K,i,j,res,digit=0;
		scanf("%llu",&K);
		K = (10*power(2,(K-1)))%1000000007;
		printf("%llu\n",K);
	}
	return 0;
}
