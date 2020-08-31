#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum=0;int product=1;
	int temp;
	while(n > 0){
		temp = n%10;
		sum += temp;
		product *= temp;
		n = n/10;
	}
	if(sum == product){
		cout<<"spy number\n";
	}
	else
		cout<<"not spy number\n";
		return 0;
}
