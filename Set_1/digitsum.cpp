#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1000];
	int sum=0;
	cout<<"Enter the value: ";
	scanf("%s",a);
	for(int i=0; i<strlen(a); i++)
	{
		sum+=(a[i]-48);	
	}
	cout<<sum;
	return 0;
}
