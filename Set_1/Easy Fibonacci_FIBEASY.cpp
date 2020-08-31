#include<bits/stdc++.h>
using namespace std;
long long int two[60];
int A[65];
void t_pow()
{
	for(int i=0; i<=60 ; i++)
	{
		two[i] = pow(2,i);
	}
}
unsigned long long int fib(int n) 
{ 
  unsigned long int a=0, b=1,sum; 
  for (unsigned long long int i = 3; i <= n; i++) 
  { 
  	sum = ((a%10)+(b%10))%10;
  	a = b%10;
  	b = sum%10;
  } 
  if(n==1)return 0;
  if(n==2)return 1;
  return sum%10; 
}
void f_count()
{
	for(int i=3; i<=60; i++)
	{
		A[i] = A[i-1]+A[i-2];
	}
}
int main()
{
	unsigned long long int T,val;
	A[1] = 0;A[2] = 1;
	t_pow();
	f_count();
	cin>>T;
	while(T--)
	{
		unsigned long long int N,x;
		cin>>N;
		if(N==1){
			cout<<"0\n";
			continue;
		}
		else if(N==2)
		{
			cout<<"1\n";
			continue;
		}
		for(int i=1; i<60; i++)
		{
			if(N>=two[i] && N<two[i+1])
			{
				x = two[i];
			//	cout<<"\t"<<x<<"\n";
				break;	
			}	
		}
		x = x%60;
		val = A[x];
	//	cout<<val<<"\n";
		cout<<val%10<<"\n";
	}
	return 0;
}
