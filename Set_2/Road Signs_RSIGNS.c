#include<stdio.h>
#include<math.h>

#define MAX 100000  
int multiply(int x, int res[], int res_size) { 
  int i;
int carry = 0; 
for (i = 0; i < res_size; i++) { 
    int prod = res[i] * x + carry; 
 
    res[i] = prod % 10; 
  
    // Put rest in carry 
    carry = prod / 10; 
} 
while (carry) { 
    res[res_size] = carry % 10; 
    carry = carry / 10; 
    res_size++; 
} 
return res_size; 
} 
void power(int x, int n)  
{ int i;
if(n == 0 ){  
    cout<<"1"; 
    return; 
} 
  
  
int res[MAX]; 
int res_size = 0; 
int temp = x; 
 
while (temp != 0) { 
    res[res_size++] = temp % 10; 
    temp = temp / 10; 
} 
for (i = 2; i <= n; i++) 
    res_size = multiply(x, res, res_size); 

for (i = res_size - 1; i >= 0; i--) 
    cout << res[i]; 
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int K,i,j,res,digit=0;
		scanf("%llu",&K);
		K = 10*(pow(2,(K-1)));
		printf("%llu\n",K%1000000007);
	}
	return 0;
}
