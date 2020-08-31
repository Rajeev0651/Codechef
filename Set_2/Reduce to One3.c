#include<stdio.h>
long int stirlingFactorial(int n);
int main()
{
	long int T;
	const unsigned int M = 1000000007;
	unsigned long long res = 1;
	scanf("%ld",&T);
	while(T--)
	{
		unsigned long long int N,i;
		scanf("%llu",&N);
		unsigned long long int start;
		start = stirlingFactorial(N+1);
	printf("%llu\n",start);
	}
	return 0;
}
long int stirlingFactorial(int n) 
{ 
    if (n == 1) 
        return 1; 
    long int z; 
    float e = 2.71; // value of natural e 
      
    // evaluating factorial using 
    // stirling approximation 
    z = sqrt(2*3.14*n) * pow((n/e), n); 
    return z; 
} 
