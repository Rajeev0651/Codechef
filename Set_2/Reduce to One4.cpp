#include <bits/stdc++.h> 
using namespace std; 
unsigned long long int largestPower(unsigned long long int n, unsigned long long int p) 
{ 
	unsigned long long int x = 0; 
	while (n) { 
		n /= p; 
		x += n; 
	} 
	return x; 
}  
unsigned long long int power(unsigned long long int x, unsigned long long int y, unsigned long long int p) 
{ 
	unsigned long long int res = 1; 
	x = x % p;
	while (y > 0) { 
		if (y & 1) 
			res = (res * x) % p; 
		y = y >> 1;
		x = (x * x) % p; 
	} 
	return res; 
}  
unsigned long long int modFact(unsigned long long int n, unsigned long long int p) 
{ 
	if (n >= p) 
		return 0; 

	unsigned long long int res = 1,i; 
	bool isPrime[n + 1]; 
	memset(isPrime, 1, sizeof(isPrime)); 
	for (i = 2; i * i <= n; i++) { 
		if (isPrime[i]) { 
			for (int j = 2 * i; j <= n; j += i) 
				isPrime[j] = 0; 
		} 
	}  
	for (unsigned long long int i = 2; i <= n; i++) { 
		if (isPrime[i]) { 
			unsigned long long int k = largestPower(n, i); 
			res = (res * power(i, k, p)) % p; 
		} 
	} 
	return res; 
}  
int main() 
{ 
	long int T;
	const unsigned int M = 1000000007;
	unsigned long long res = 1;
	scanf("%ld",&T);
	while(T--)
	{
		unsigned long long int N,res;
		scanf("%llu",&N);
		N = (N+1)%M;
		res = (modFact(N, M))%M;
		printf("%llu\n",res-1);
	}
	return 0; 
} 

